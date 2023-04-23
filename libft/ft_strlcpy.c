/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:10:17 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/23 11:17:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	index;
	int	origin_length;

	index = 0;
	dest = malloc (sizeof(char) * dstsize);
	while (index <= dstsize)
	{
		dest[index] = origin[index];
		index++;
	}
	return (dest);
}
