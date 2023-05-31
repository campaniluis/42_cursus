/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:12:11 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/30 12:32:30 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>

// Extracts the line (ending in either line break and `\0` or only `\0` in EOF) from static variable.
char *get_line(int fd, char *str)
{
	int index;
	char *line;

	index = 0;
	while (str[index] && str[index] != '\n')
		index++;
	line = malloc(sizeof(char) * (index + 1));
	index = 0;
	while (str[index] && str[index] != '\n')
		line[index] = str[index++];
	line[index++] = '\n';
	line[index] = '\0';
	return (line);
}

// function to measure line
size_t line_size(char *str)
{
	size_t index;

	index = 0;
	while (str[index] && str[index] != '\n')
		index++;
	return (index);
}

// Stores in the cumulative static variable the new updated variable with whatever is left from the original, minus the line extracted.
// Function not used
char *remaining_text(char *str, size_t counter)
{
	char *rest_of_line;

	rest_of_line = malloc(sizeof(char) * (counter + 1));
	if (!rest_of_line)
		return (NULL);
	while (str[counter])
	{
		rest_of_line[counter] = str[counter];
		counter++;
	}
	free(str);
	return (rest_of_line);
}

// function to complete line if BUFF_SIZE < line_size
char *complete_line(size_t counter, char *str)
{
	char 			*rest_of_line;
	static size_t 	current_buff_size;
	size_t			buff_size;

	buff_size = BUFF_SIZE;
	counter = line_size(str);
	rest_of_line = malloc(sizeof(char) * buff_size);
	if (!rest_of_line)
		return (NULL);
	while (str[counter])
		rest_of_line[counter] = str[counter++];
	free(str);
	if (current_buff_size < counter)
		complete_line(counter, str);
	else
		current_buff_size = 0;
	current_buff_size = (current_buff_size + buff_size);
	return (rest_of_line);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*buff;
	size_t		counter;

	if (str == NULL)
		str = ft_calloc(1, sizeof(char));
	buff = get_line(fd, str);
	counter = line_size(str);
	if (BUFF_SIZE < counter)
		ft_strjoin(buff, complete_line(counter, str));
}

int main(void)
{
	char 	*line;
	int		fd;

	fd = open("text.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s\n", line);
	return (0);
}
