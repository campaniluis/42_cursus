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
#include <stdlib.h>

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
// char	*complete_line(char *str)
// {
// 	char			*rest_of_line;
// 	static size_t	index;

// 	counter = line_size(str);
// 	rest_of_line = malloc(sizeof(char) * BUFFER_SIZE);
// 	if (!rest_of_line)
// 		return (NULL);
// 	while (str[counter])
// 	{
// 		rest_of_line[counter] = str[counter];
// 		counter++;
// 	}
// 	free(str);
// 	if (index < counter)
// 		complete_line(counter, str);
// 	else
// 		index = 0;
// 	index = (index + BUFFER_SIZE);
// 	return (rest_of_line);
// }

char	*get_next_line(int fd)
{
	static char		buff[BUFFER_SIZE + 1];
	const char		*temp;
	char			*line;
	char			*rest_of_line;
	size_t			index;

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
		printf("buff: %s\n", buff);
		temp = buff_clean(buff);
		index = read(fd, buff, BUFFER_SIZE);
		rest_of_line = get_line(buff);
		printf("temp: %s\n", temp);
		printf("rest_of_line: %s\n", rest_of_line);
		line = ft_strjoin(temp, rest_of_line);
		printf("line: %s\n------------------\n", line);
	}
	return (line);
}

int	main(void)
{
	char	*line;
	int		fd;

	fd = open("text.txt", O_RDONLY);
	// printf("First line:\n");
	line = get_next_line(fd);
	// if (line)
	// 	printf("\nSecond line:%s\n", line);
	// else
	// 	printf("NULL\n");
	free(line);
	// printf("\nSecond line:\n");
		line = get_next_line(fd);
	// if (line)
	// 	printf("\nSecond line:\n%s\n", line);
	// else
	// 	printf("NULL\n");
	free(line);
	line = get_next_line(fd);
	if (line)
		printf("\nThird line: \n%s\n", line);
	else
		printf("NULL\n");
	free(line);
	line = get_next_line(fd);
	if (line == NULL)
		printf("\nCONGRATS! YOU'VE READ A FILE\n");
	else
		printf("\nSomething's wrong in the end: \n%s\n", line);

	free(line);

	return (0);
}
