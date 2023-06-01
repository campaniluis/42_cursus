/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:12:11 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/01 19:26:30 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// function to measure line
size_t	line_size(char *str)
{
	size_t	index;

	index = 0;
	if (!str)
		return (0);
	while (str[index] && str[index] != '\n')
		index++;
	if (str[index] == '\n')
		index++;
	return (index);
}

// Extracts the line (ending in either line break and `\0` or only `\0` in EOF) from static variable.
char	*get_line(char *str)
{
	int		index;
	char	*line;

	line = malloc(sizeof(char) * (line_size(str) + 1));
	index = 0;
	while (str[index] && str[index] != '\n')
	{
		line[index] = str[index];
		index++;
	}
	if (str[index] == '\n')
		line[index++] = '\n';
	line[index] = '\0';
	return (line);
}

// Stores in the cumulative static variable the new updated variable with whatever is left from the original, minus the line extracted.
char	*buff_clean(char *buff)
{
	int		counter;
	int		index;

	counter = line_size(buff);
	index = 0;
	while (index <= BUFFER_SIZE - counter)
	{
		buff[index] = buff[counter + index];
		index++;
	}
	while (index < BUFFER_SIZE)
		buff[index++] = '\0';
	return (buff);
}

// function to complete line if BUFFER_SIZE < line_size
char	*complete_line(int fd, char *str)
{
	char		*rest_of_line;

	rest_of_line = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!rest_of_line)
		return (NULL);
	read(fd, rest_of_line, BUFFER_SIZE);
	if (!ft_strchr(rest_of_line, '\n') && !ft_strchr(rest_of_line, '\0'))
		complete_line(fd, str);
	else
		return (rest_of_line);
	return (rest_of_line);
}

char	*get_next_line(int fd)
{
	static char		buff[BUFFER_SIZE + 1];
	char			*temp;
	char			*line;
	size_t			index;

	if (!buff[0])
	{
		index = read(fd, buff, BUFFER_SIZE);
		buff[index] = '\0';
		if (index == 0)
			return (NULL);
		else
		{
			printf("\nLOOP:");
			while (!ft_strchr(buff, '\n'))
			{
				temp = get_line(buff);
				index = read(fd, buff, BUFFER_SIZE);
				buff[index] = '\0';
				line = ft_strjoin(temp, buff);
				printf("\nnew_loop: %s\n", line);
				buff_clean(buff);
			}
			return (line);
		}
	}
	else
	{
		printf("\nValor do buff entrando: %s\n", buff);
		if (ft_strchr(buff, '\n'))
		{
			printf("I'M HERE!");
			temp = get_line(buff);
			buff_clean(buff);
			return (temp);
		}
		else if (ft_strchr(buff, '\0'))
		{
			if (buff[0] == '\0')
				return (NULL);
			else
			temp = get_line(buff);
			buff_clean(buff);
			return (temp);
		}
	}
	return (NULL);
}
