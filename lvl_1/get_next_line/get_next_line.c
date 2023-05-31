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
char *get_line(char *str)
{
	int index;
	char *line;

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
size_t line_size(char *str)
{
	size_t index;

	index = 0;
	while (str[index] && str[index] != '\n')
		index++;
	if(str[index] == '\n')
		index++;
	return (index);
}
//função pra arrumar o buffer
char *buff_clean(char *buff)
{
	int	counter;
	int	index;
	// o que tiver depois do \n vai pro início
	counter = line_size(buff);
	while(index < counter)
	{
		buff[index] = buff[counter  + index];
		index++;
	}
	// resto = '\0'
	while(index < BUFFER_SIZE)
		buff[index++] = '\0';
}

// Stores in the cumulative static variable the new updated variable with whatever is left from the original, minus the line extracted.
// function to complete line if BUFFER_SIZE < line_size
char *complete_line(size_t counter, char *str)
{
	char 			*rest_of_line;
	static size_t 	index;

	counter = line_size(str);
	rest_of_line = malloc(sizeof(char) * BUFFER_SIZE);
	if (!rest_of_line)
		return (NULL);
	while (str[counter])
	{
		rest_of_line[counter] = str[counter];
		counter++;
	}
	free(str);
	if (index < counter)
		complete_line(counter, str);
	else
		index = 0;
	index = (index + BUFFER_SIZE);
	return (rest_of_line);
}

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	char		*temp;
	size_t		counter;
	size_t		index;

	if (!buff[0])
	{	
		index = read(fd, buff, BUFFER_SIZE);
		if (index == 0)
			return(NULL);
		if (ft_strchr(buff, '\n'))
			return (get_line(buff));
	}
	else
	{
		temp = buff_clean(buff);
		index = read(fd, buff, BUFFER_SIZE);
		if (ft_strchr(buff, '\n'))
			return (get_line(buff));
	}
	// se tiver buffer, passar do buffer pra linha até \n ou \0
	// str = get_line(buff);
	counter = line_size(buff);
	return (buff);
}

int main(void)
{
	char 	*line;
	int		fd;

	fd = open("text.txt", O_RDONLY);
	line = get_next_line(fd);
	if (line)
		printf("%s\n", line);
	else
		printf("NULL\n");
	free(line);
		line = get_next_line(fd);
	if (line)
		printf("%s\n", line);
	else
		printf("NULL\n");
	free(line);
	line = get_next_line(fd);
	if (line)
		printf("%s\n", line);
	else
		printf("NULL\n");
	free(line);
	return (0);
}
