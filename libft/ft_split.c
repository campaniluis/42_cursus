/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:54 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/06 17:47:08 by lclaudio         ###   ########.fr       */
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
		if (ft_strchr(&s[index], c))
			counter++;
		index++;
	}
	return (counter);
}

int	word_length(char const *s, char c)
{
	int	index;

	index = 0;
	while (s[index] != 0 && !ft_strchr(&s[index], c))
		index++;
	return (index);
}

void	*write_word(char *cabinet[counter], const char *s, int index, char c)
{
	ft_strlcpy((const char *)cabinet[counter], s, word_length(&s[index], char c));
	cabinet[word_length(&s[index], c) + 1] = '\0';
	return (0);
}

void free_malloc(char *s, int size)
{
}

char	**ft_split(char const *s, char c)
{
	char	**cabinet;
	int		counter;
	int		index;
	int		len;

	index = 0;
	counter = 0;
	cabinet = (char **)malloc((word_counter(s, c) + 1) * sizeof(char));
	if (!cabinet)
		return (free);
	while (s[index])
	{
		len = word_length(&s[index], c);
		cabinet[counter] = (char **)malloc((len + 1) * sizeof(char));
		if (!cabinet[counter])
			free_malloc;
			return (0);
		write_word(cabinet, s, index, c);
		index = index + word_length(&s[index], c);
		counter++;
	}
	return (&*cabinet);
}
