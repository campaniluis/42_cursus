/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:54 by lclaudio			       #+#    #+#             */
/*   Updated: 2023/05/28 17:53:04 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_counter(char	const	*s, char c)
{
	int	counter;
	int	index;

	counter = 0;
	index = 0;
		while (s[index] != '\0')
		{
			if(s[index] == c)
				counter++;
			index++;
		}
	return (counter);
}

size_t	word_length(char	const	*s, char c)
{
	int	index;

	index = 0;
	while (s[index] != '\0' && s[index] != c)
		index++;
	return (index);
}

void	free_malloc(char **s, int size)
{
	int	index;

	index = 0;
	while (index <= size)
	{
		free(s[index]);
		index++;
	}
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
	if (!ft_strchr(s, c))
		return ((char **)s);
	cabinet = (char **)malloc((word_counter(s, c) + 1) * sizeof(char));
	if (!cabinet)
		return (0);
	while (s[index])
	{
		len = word_length(&s[index], c);
		cabinet[counter] = (char *)malloc((len + 1) * sizeof(char));
		if (!cabinet[counter])
		{
			free_malloc(cabinet, counter);
			return (0);
		}
		cabinet[counter] = ft_substr(s, index, len);
		index = (index + word_length(&s[index], c));
		counter++;
		index++;
	}
	cabinet[counter] = NULL;
	return (cabinet);
}
