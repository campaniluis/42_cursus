/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:54 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/29 12:43:00 by lclaudio         ###   ########.fr       */
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

void	free_malloc(char **s, int size)
{
	while (size > -1)
	{
		free(s[size]);
		size--;
	}
	free(s);
}

char	**ft_split(char const *s, char c)
{
	char	**cabinet;
	int		counter;
	int		index;
	size_t	len;

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
			len = word_length(&s[index], c);
			//cabinet[counter] = malloc((len + 1) * sizeof(char));
			cabinet[counter] = ft_substr(s, index, len);
			if (!cabinet[counter])
			{
				free_malloc(cabinet, counter);
				return (0);
			}
			cabinet[counter][len] = 0;
			index = (index + len);
			counter++;
		}
	}
	cabinet[counter] = NULL;
	return (cabinet);
}
