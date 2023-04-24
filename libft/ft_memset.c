/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:50 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/23 16:51:30 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *ptr, int value, size_t num)
{
	size_t	index;

	index = 0;
	if (num <= 0 || ptr == NULL)
		return (0);
	while (ptr[index] != '\0' && index < num)
	{
		((char *)ptr)[index] = value;
		index++;
	}
	return ((void)ptr);
}
