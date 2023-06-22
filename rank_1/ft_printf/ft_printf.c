/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:58 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/22 15:00:10 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

required(char c, va_list args, int conv)
{
	if (c == 'd')
	{
		int		conv_spec;
		char	*str;
		
		conv_spec = args;
		str = ft_itoa(conv_spec);
	}
}

int	ft_printf(const char *format, ...)
{
	size_t	index;
	size_t	counter;
	va_list	args;

	va_start(args, format);
	index = 0;
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '%')
			{
				write(1, &format[index], 1);
				counter++;
			}
			// else
			// 	counter += required(format[index], args);
			index++;
		}
		else
		{
			write(1, &format[index], 1);
			counter++;
		}
		index++;
	}
	va_end(args);
	return (index);
}
