/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:12:11 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/01 20:39:46 by lclaudio         ###   ########.fr       */
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
// CURRENTLY NOT USED
char	*complete_line(int fd, char *buff)
{
	char	*temp;
	size_t	index;

	while (!ft_strchr(buff, '\n'))
	{
		printf("I AM HERE!!!");
		temp = get_line(buff);
		index = read(fd, buff, BUFFER_SIZE);
		buff[index] = 0;
		temp = ft_strjoin(temp, buff);
	}
	return (temp);
}

char	*get_next_line(int fd)
{
	static char		buff[BUFFER_SIZE + 1];
	char			*temp;
	size_t			index;

	if (!buff[0])
	{
		index = read(fd, buff, BUFFER_SIZE);
		buff[index] = 0;
		if (index == 0)
			return (NULL);
	}
	if (ft_strchr(buff, '\n'))
	{
		temp = get_line(buff);
		buff_clean(buff);
		return (temp);
	}
	// all buffs have a '\0' after them
	if (!ft_strchr(buff, '\n') && !ft_strchr(buff, '\0'))
		return (complete_line(fd, buff));
	else if (ft_strchr(buff, '\0'))
	{
		temp = get_line(buff);
		buff_clean(buff);
		return (temp);
	}
	return (NULL);
}
