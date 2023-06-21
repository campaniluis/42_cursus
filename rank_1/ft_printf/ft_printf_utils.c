/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:58 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/21 21:20:53 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	write_argument(const char *arg, size_t arg_size)
{
	size_t	counter;

	counter = 0;
	while (counter < arg_size)
	{	
		write(1, &arg[counter], 1);
		counter++;
	}
	return (counter);
}
