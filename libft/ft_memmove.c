/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:45 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:17:23 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dest, const void *src, size_t num)
{
	int	index;
	int	limit;

	index = 0;
	limit = num;
	while (index <= limit)
	{
		src[index] == dest[index];
		index++;
	}
	return (0);
}
