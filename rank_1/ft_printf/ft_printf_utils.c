/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:58 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/05 08:57:10 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


int	trigger(const char c, char *flags)
{
	int	counter;

	counter = 0;
	while (flags[counter] != '\0')
	{
		if (c == flags[counter])
			return (1);
		counter++;
	}
	return (0);
}
