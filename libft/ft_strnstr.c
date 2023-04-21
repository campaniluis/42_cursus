/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:11:14 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:28:02 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, int num)
{
	int	index;
	int	n_size;

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
