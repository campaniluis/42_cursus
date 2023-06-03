/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:12:11 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/02 22:02:35 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

char	*get_line(char *str)
{
	int		index;
	char	*line;

	line = malloc(sizeof(char) * (line_size(str) + 1)); // III ends there here
	if (!line)
		return (NULL);
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

char	*complete_line(int fd, char *buff)
{
	char	*line;
	size_t	index;

	line = get_line(buff);
	while (!ft_strchr(buff, '\n') && buff[0] != '\0')
	{
		index = read(fd, buff, BUFFER_SIZE);
		buff[index] = 0;
		line = ft_strjoin(line, get_line(buff)); // II goes here
	}
	buff_clean(buff);
	return (line);
}

char	*get_next_line(int fd)
{
	static char		buff[BUFFER_SIZE + 1];
	char			*line;
	size_t			index;

	if (read(fd, 0, 0) < 0)
	{
		buff[0] = 0;
		return (NULL);
	}
	if (!buff[0])
	{
		index = read(fd, buff, BUFFER_SIZE);
		buff[index] = 0;
		if (index == 0)
			return (NULL);
	}
	line = complete_line(fd, buff); // I starts here
	return (line);
}
