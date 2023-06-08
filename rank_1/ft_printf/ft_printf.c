/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:58 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/06 11:40:38 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	size_t	index;
	va_list	args;
	// t_flags flag;

	va_start(args, format);
	index = 0;
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;
			if (ft_isalpha(format[index]))
				required(format[index], args);
			else if (format[index] == '%')
				write(1, &format[index], 1);
			else if (trigger(format[index], " .0-#+"))
				index = index + bonus(format, format[index], index, args);
			index++;
		}
		else
			write(1, &format[index], 1);
		index++;
	}
	va_end(args);
	return (index);
}
