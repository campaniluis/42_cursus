/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:54 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/29 16:33:23 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_counter(char const *s, char c)
{
	int	counter;
	int	index;

	counter = 0;
	index = 0;
	while (s[index])
	{
		while (s[index] && s[index] == c)
			index++;
		if (s[index] && s[index] != c)
			counter++;
		while (s[index] && s[index] != c)
			index++;
	}
	return (counter);
}

size_t	word_length(char const *s, char c)
{
	int	index;

	index = 0;
	while (s[index] && s[index] != c)
		index++;
	return (index);
}

char	**free_malloc(char **s, int size)
{
	while (size > -1)
	{
		free(s[size]);
		size--;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**cabinet;
	int		counter;
	int		index;

	index = 0;
	counter = 0;
	if (!s)
		return (NULL);
	cabinet = malloc((word_counter(s, c) + 1) * sizeof(char *));
	if (!cabinet)
		return (0);
	while (s[index])
	{
		while (s[index] && s[index] == c)
			index++;
		if (s[index] && s[index] != c)
		{
			cabinet[counter] = ft_substr(s, index, word_length(&s[index], c));
			if (!cabinet[counter++])
				return (free_malloc(cabinet, --counter));
			index = (index + word_length(&s[index], c));
		}
	}
	cabinet[counter] = NULL;
	return (cabinet);
}
