/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:12:05 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/30 12:26:14 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		index;
	size_t		size;
	char		*new_str;

	index = 0;
	size = ft_strlen((char *)s);
	while (index < len && index + start < size)
		index++;
	new_str = (char *)malloc(sizeof(char) * index + 1);
	if (!new_str)
		return (NULL);
	index = 0;
	while (index < len && index + start < size && s[start])
	{	
		new_str[index] = s[start + index];
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	index;
	size_t	counter;

	new = ft_calloc(sizeof(char), ft_strlen((char *)s1)
			+ ft_strlen((char *)s2) + 1);
	if (!new)
		return (NULL);
	index = 0;
	while (s1[index])
	{
		new[index] = s1[index];
		index++;
	}
	counter = 0;
	while (s2[counter])
	{
		new[index + counter] = s2[counter];
		counter++;
	}
	return (new);
}
