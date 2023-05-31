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

char	*buff_clean(char *buff)
{
	int	counter;
	int	index;

	counter = line_size(buff);
	printf("\nLine size: %d\n", counter);
	index = 0;
	while (index <= BUFFER_SIZE - counter)
	{
		buff[index] = buff[counter + index];
		index++;
	}
	while (index < BUFFER_SIZE)
		buff[index++] = '\0';
	printf("\nPost clean line size: %ld\n", line_size(buff));
	return (buff);
}

// Stores in the cumulative static variable the new updated variable with whatever is left from the original, minus the line extracted.
// function to complete line if BUFFER_SIZE < line_size
// char	*complete_line(size_t counter, char *str)
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
	static char	buff[BUFFER_SIZE + 1];
	char		*temp;
	char		*line;
	size_t		index;

	if (!buff[0])
	{	
		index = read(fd, buff, BUFFER_SIZE);
		if (index == 0)
			return (NULL);
		if (ft_strchr(buff, '\n'))
			return (get_line(buff));
	}
	// se tiver buffer, passar do buffer pra linha até \n ou \0
	else
	{
		temp = buff_clean(buff);
		index = read(fd, buff, BUFFER_SIZE);
		if (ft_strchr(buff, '\n'))
			line = ft_strjoin(temp, get_line(buff));
	}
	return (line);
}

int	main(void)
{
	char	*line;
	int		fd;

	fd = open("text.txt", O_RDONLY);
	printf("First line:\n");
	line = get_next_line(fd);
	printf("Acctual 1st line size: %ld\n", line_size("«Nel mezzo del cammin di nostra vita\n"));
	if (line)
		printf("%s\n", line);
	else
		printf("NULL\n");
	free(line);
	printf("\nSecond line:\n");
		line = get_next_line(fd);
	printf("Acctual 2nd line size: %ld\n", line_size("mi ritrovai per una selva oscura,\n"));
	if (line)
		printf("\n%s\n", line);
	else
		printf("NULL\n");
	free(line);
	line = get_next_line(fd);
	if (line)
		printf("\nThird line: %s\n", line);
	else
		printf("NULL\n");
	free(line);
	return (0);
}
