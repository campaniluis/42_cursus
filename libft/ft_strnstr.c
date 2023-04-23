/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:11:14 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/23 11:19:19 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t num)
{
	size_t	index;
	size_t	n_size;

	index = 0;
	n_size = 0;
	while (needle[n_size] != '\0')
		n_size++;
	while ((needle[index] || haystack[index]) != '\0' && index < num)
	{	
		if (needle[index] == haystack[index])
		{
			while (needle[index] == haystack[index])
				index++;
			return (haystack[index - n_size]);
		}
		index++;
	}
	return (0);
}
