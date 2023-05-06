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

void	ft_free_split(char **split)
{
	// refazer
    int	index;

    if (split == NULL)
        return (0);
    index = 0;
    while (split[index])
    {
        free(split[index]);
        index++;
    }
    free(split);
}

int	word_counter(char const *s, char c)
{
	int	counter;
	int	index;

	counter = 0;
	index = 0;
	while (s[index])
	{
		if (s[index] != c && (index == 0 || s[index - 1] == c))
			counter++;
		index++;
	}
	return (counter);
}

int	word_length(const char *s, char c)
{
	int	index;

	index = 0;
	while (s[index] != c && s[index])
		index++;
	return (index);
}

char	**ft_split(char const *s, char c)
{
	char	**cabinet;
	int		counter;
	int		index;

	index = 0;
	counter = 0;
	cabinet = (char **)malloc((word_counter(s, c) + 1) * sizeof(char *));
	if (!cabinet)
		return (NULL);
	while (s[index])
	{
		if (s[index] != c && (index == 0 || s[index - 1] == c))
		{
			cabinet[counter] = ft_substr(&s[index], 0, word_length(&s[index], c));
			if (!cabinet[counter])
			{
				ft_free_split(cabinet);
				return (NULL);
			}
			counter++;
		}
		index++;
	}
	cabinet[counter] = NULL;
	return (cabinet);
}