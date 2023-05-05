/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:45 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/04 10:14:35 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t	index;

	index = 0;
	if	(src < dest)
	{
		while (num > 0)
		{
			((unsigned char *)dest)[num - 1] = ((unsigned char *)src)[num - 1];
			num--;
		}
	}
	else
		ft_memcpy(dest, src, num);
	return (dest);
}
