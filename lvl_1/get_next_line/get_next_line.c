/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:12:11 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/31 23:13:38 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// function to measure line
size_t	line_size(char *str)
{
	size_t	index;

	index = 0;
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
	if (!ft_strchr(str, '\n'))
		line[index++] = '\n';
	line[index] = '\0';
	return (line);
}

// Stores in the cumulative static variable the new updated variable with whatever is left from the original, minus the line extracted.
char	*buff_clean(char *buff)
{
	int	counter;
	int	index;
	char *clear_buff;
	
	clear_buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	counter = line_size(buff);
	index = 0;
	while (index <= BUFFER_SIZE - counter)
	{
		clear_buff[index] = buff[counter + index];
		index++;
	}
	while (index < BUFFER_SIZE)
		clear_buff[index++] = '\0';
	return (clear_buff);
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
	static char			*temp;
	// char			*line;
	// char			*rest_of_line;
	size_t			index;

	printf("\n\n\n\nNOVO TESTE\n\nValor da temp entrando: %s\n", temp);
	if (!buff[0])
	{	
		index = read(fd, buff, BUFFER_SIZE);
		if (index == 0)
			return (NULL);
		if (ft_strchr(buff, '\n'))
			return (get_line(buff));
	}
	else
	{
		if (ft_strchr(buff, '\n'))
		{
			if (temp && ft_strchr(temp, '\n'))
				temp = buff_clean(temp);
			else if (temp && !ft_strchr(temp, '\0'))
			{
				temp = buff_clean(temp);
				if (temp[0] == '\0')
					return (NULL);
				else
					return (get_line(temp));
			}
			else
				temp = buff_clean(buff);
			return (get_line(temp));
		}
	// 	temp = buff_clean(buff);
	// 	if (!temp)
	// 		return (NULL);
	// 	else if (ft_strchr(temp, '\n'))
	// 	{
	// 		return (get_line(temp));
	// 		temp = buff_clean(temp);
	// 	}
	// 	index = read(fd, buff, BUFFER_SIZE);
	// 	if (ft_strchr(buff, '\n'))
	// 	{
	// 		rest_of_line = get_line(buff);
	// 		printf("\n\n\nrest_of_line: %s\n", rest_of_line);
	// 		printf("temp: %s\n", temp);
	// 		line = ft_strjoin(temp, rest_of_line);
	// 		return (line);
	// 	}
	// 	else if (ft_strchr(buff, '\0'))
	// 	{
	// 		if (buff[0] == '\0')
	// 			return (NULL);
	// 		else
	// 			return (get_line(buff));
	// 	}
	// 	else
	// 	{
	// 		line = complete_line(fd, buff);
	// 		return (ft_strjoin(buff, line));
	// 	}
	}
	return (NULL);
}
