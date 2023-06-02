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

void	ft_bzero(void *ptr, size_t limit)
{
	size_t	index;

	index = 0;
	while (index < limit)
	{
		((char *)ptr)[index] = 0;
		index++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*output;

	output = malloc(nmemb * size);
	if (output == 0)
		return (0);
	ft_bzero(output, (nmemb * size));
	return (output);
}

char	*ft_strchr(const char *str, int to_find)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == (unsigned char)to_find)
			return ((char *)&str[index]);
		index++;
	}
	if (str[index] == (unsigned char)to_find)
		return ((char *)&str[index]);
	return (NULL);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	index;

	index = 0;
	if (dstsize < 1)
		return (ft_strlen((char *)src));
	while (index < (dstsize - 1) && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (ft_strlen((char *)src));
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
