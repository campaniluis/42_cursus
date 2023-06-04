/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:12:11 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/04 10:47:37 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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

char	*get_a_line(char *str)
{
	int		index;
	char	*line;

	line = malloc(sizeof(char) * (line_size(str) + 1));
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

	line = get_a_line(buff);
	while (!ft_strchr(buff, '\n') && buff[0] != '\0')
	{
		index = read(fd, buff, BUFFER_SIZE);
		buff[index] = 0;
		line = ft_strjoin(line, get_a_line(buff));
	}
	buff_clean(buff);
	return (line);
}

char	*get_next_line(int fd)
{
	static char		buff[FOPEN_MAX][BUFFER_SIZE + 1];
	char			*line;
	size_t			index;

	if (read(fd, 0, 0) < 0 || fd >= FOPEN_MAX)
	{
		if (fd < FOPEN_MAX && fd > 0)
			buff[fd][0] = 0;
		return (NULL);
	}
	if (!buff[fd][0])
	{
		index = read(fd, buff[fd], BUFFER_SIZE);
		buff[fd][index] = 0;
		if (index == 0)
			return (NULL);
	}
	line = complete_line(fd, buff[fd]);
	return (line);
}

// bit.ly/43F9S6B
// int	main(void)
// {
// 	char	*line;
// 	int		dialogue_1;
// 	int		dialogue_2;
// 	int		index;
// 	int		counter;

// 	dialogue_1 = open("dialogue_1.txt", O_RDONLY);
// 	dialogue_2 = open("dialogue_2.txt", O_RDONLY);
// 	index = 0;
// 	while (index < 2)
// 	{
// 		counter = 0;
// 		while (counter < 2)
// 		{
// 			line = get_next_line(dialogue_1);
// 			printf("Troy:	%s\nCurrent fd number: %d\n", line, dialogue_1);
// 			free(line);
// 			counter++;
// 		}
// 		counter = 0;
// 		while (counter < 2)
// 		{
// 			line = get_next_line(dialogue_2);
// 			printf("Ahmed:	%sCurrent fd number: %d\n\n", line, dialogue_2);
// 			free(line);
// 			counter++;
// 		}
// 		index++;
// 	}
// 	index = 0;
// 	while (index < 2)
// 	{
// 		line = get_next_line(dialogue_2);
// 		printf("Ahmed:	%sCurrent fd number: %d\n\n", line, dialogue_2);
// 		free(line);
// 		line = get_next_line(dialogue_1);
// 		printf("Troy:	%sCurrent fd number: %d\n\n", line, dialogue_1);
// 		free(line);
// 		index++;
// 	}
// 	printf("END OF SCENE\n");
// 	close(dialogue_1);
// 	close(dialogue_2);
// 	return (0);
// }