/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:10:11 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/02 21:39:20 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	free((char *)s1);
	free((char *)s2);
	return (new);
}
