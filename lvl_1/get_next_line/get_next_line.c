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
	static char	*buff;
	int			index;

	buff = malloc(sizeof(char) * ft_strlen(str));
	index = 0;
	while (str[index])
	{
		buff[index] = str[index];
		index++;
	}
	return (buff);
}

// // uma função pra encontrar o \n
// size_t find_newline(char *str, )
// {
// 	size_t	index;

// 	index = 0;
// 	while (str[index] && str[index] != '\n')
// 		index++;
// 	return(index);
// }

// char	*get_next_line(int fd)
// {
// 	char	*next_line;
// 	char	*str;
// 	size_t	counter;

// 	str = read_file();
// 	counter = 0;
// 	next_line = ft_substr(str, counter, (counter + find_newline(str, )));
// 	if (!next_line)
// 		return (-1);
// 	return (1);
// }

int	main(void)
{
	const char *str;

	str = "I am the first line\nI am the second line\nThe third line is the last";
	printf("%s\n", read_file(str));
	return (0);
}
