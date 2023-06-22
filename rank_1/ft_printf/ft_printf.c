/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:58 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/22 21:04:21 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	required(char c, va_list args)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter += ft_putchar(va_arg(args, int));
	if (c == 's')
		counter += ft_putstr(va_arg(args, char *));
	if (c == 'p')
		counter += ft_putvoidptr(va_arg(args, unsigned long));
	if (c == 'd')
		counter += ft_putnbr(va_arg(args, unsigned int), DEC, 10);
	if (c == 'i')
		counter += ft_putnbr(va_arg(args, int), DEC, 10);
	if (c == 'u')
		counter += ft_putnbr(va_arg(args, unsigned int), DEC, 10);
	if (c == 'x')
		counter += ft_putnbr(va_arg(args, unsigned int), HEX, 16);
	if (c == 'X')
		counter += ft_putnbr(va_arg(args, unsigned int), HEX, 16);
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	size_t	index;
	int		counter;
	va_list	args;

	va_start(args, format);
	index = 0;
	counter = 0;
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '%')
				counter += write(1, &format[index], 1);
			else
				counter += required(format[index], args);
		}
		else
			counter += write(1, &format[index], 1);
		index++;
	}
	va_end(args);
	return (counter);
}
