/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:58 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/06 11:39:31 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	not_alpha_len(const char *str, size_t index)
{
	size_t	counter;

	counter = 0;
	while (str[index + counter] != '\0' && !ft_isalpha(str[index + counter]))
		counter++;
	return (counter);
}

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
