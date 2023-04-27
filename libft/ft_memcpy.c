/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:37 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/27 10:22:00 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t	index;

	index = 0;
	if (src == NULL)
		return ;
	while (index < num)
	{
		((char *)dest)[index] = ((char *)src)[index];
		index++;
	}
}
