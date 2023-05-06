/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:11:14 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/06 16:05:57 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t num)
{
	size_t	index;
	size_t	size_needle;

	index = 0;
	size_needle = ft_strlen((char *)needle);
	if (size_needle == 0)
		return ((char *)haystack);
	while (haystack[index] && index < (num - size_needle + 1) && num > 0)
	{
		if (ft_strncmp(&((char *)haystack)[index], needle, size_needle) == 0)
			return (&((char *)haystack)[index]);
		index++;
	}
	return (0);
}
