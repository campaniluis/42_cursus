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

// uma função pra ler o ficheiro 
char *read_file(const char *str)
{
	int			index;

	index = 0;
	while (str[index])
	{
		buff[index] = str[index];
		index++;
	}
	return (buff);
}

// uma função pra encontrar o \n
size_t get_line(char *buff)
{
	size_t	index;

	index = 0;
	while (str[index] && str[index] != '\n')
		index++;
 	buff = malloc(sizeof(char) * (index + 2));
	buff[index++] = '\n';
	buff[index] = '\0';
	return(buff);
}

char	*get_next_line(int fd)
{
	char	*next_line;
	char	*buff;
	static char	*str;
	size_t	counter;

	while (str[index] && str[index] != '\n')
		buff[index] = str[index++];
	buff = find_newline(buff);
	counter = 0;
	next_line = read(fd, (void *)buff, buff);
	if (!next_line)
		return (-1);
	return (1);
}

int	main(void)
{
	size_t		index;
	size_t		line_size;
	static char	*buff;


	index = 0;
	str = "I am the first line\nI am the second line\nThe third line is the last";
	printf("Original string:\n%s\n\n", read_file(str));
	while(str[index])
	{
		printf("Current string:\n%s\n", read_file(str));
		line_size = find_newline(str);
		printf("Line size:%ld\n", line_size);
		str = read(fd, (void *)buff, str);
		printf("Post substr string:%s\n\n", str);
		index = index + line_size;
	}
	return (0);
}
