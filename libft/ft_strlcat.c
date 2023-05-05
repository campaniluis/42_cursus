/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:10:14 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/04 11:22:55 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	counter;

	index = 0;
	counter = ft_strlen(dest);
	if (size <= counter)
		return (ft_strlen((char *)src) + size);
	while (src[index] != '\0' && index + counter < size - 1)
	{
		dest[index + counter] = src[index];
		index++;
	}
	dest[counter + index] = '\0';
	return (counter + ft_strlen((char *)src));
}
