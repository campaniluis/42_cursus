/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:28 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/11 16:28:26 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t	index;

	index = 0;
	if (ptr == NULL && value == 0 && num == 0)
		return (0);

	while (index < num)
	{
		if (((char *)ptr)[index] == (char)value)
			return ((&((void *)ptr)[index]));
		index++;
	}
	return (0);
}
