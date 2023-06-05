/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:58 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/30 12:13:22 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
	size_t	index;
	va_list	args;
	// char	flag;

	va_start(args, format);
	index = 0;
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;
			if (ft_isalpha(format[index]))
				required(format[index]);
			else if (format[index] == '%')
				write(1, &format[index], 1);
			else
				bonus(format, format[index], index);
			index++;
		}
		else
			write(1, &format[index], 1);
		index++;
	}
	// va_arg(args, type) // the first arg specifies what the other args will be

	va_end(args);
	return (index);
}