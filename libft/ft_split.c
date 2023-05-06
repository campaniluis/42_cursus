/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:54 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/06 16:38:37 by lclaudio         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char 	*cabinet;
	char 	**drawers;
	int		counter;
	int		index;

	index = 0;
	counter = 0;
	cabinet = malloc((word_counter(s, c) + 1) * sizeof(char))
	while (s)
	{
		*drawers[counter] = malloc(word_length(&s[index], c) * char);
		counter++;
	}
	retur

}
