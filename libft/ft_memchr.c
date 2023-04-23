/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:28 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/23 12:34:45 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memchr(void *ptr, int value, int num);
{
	int	index;

	index = 0;
	while (index <= num)
	{
		index++;
		if (ptr[index] == value)
			return (ptr[index]);
	}
	return (0);
}
