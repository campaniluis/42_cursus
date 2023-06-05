/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 10:04:10 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/05 10:25:44 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_bzero(void *ptr, size_t limit)
{
	size_t	index;

	index = 0;
	while (index < limit)
	{
		((char *)ptr)[index] = 0;
		index++;
	}
}