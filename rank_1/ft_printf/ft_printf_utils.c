/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:58 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/22 21:04:43 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	counter;

	counter = 0;
	if (!s)
		counter += write(1, "(null)", 6);
	else
	{
		while (s[counter])
		{
			write(1, &s[counter], 1);
			counter++;
		}
	}
	return (counter);
}

int	ft_putchar(char c)
{
	int	counter;

	counter = 0;
	counter += write(1, &c, 1);
	return (counter);
}

int	ft_putvoidptr(unsigned long voidptr)
{
	int	counter;

	counter = 0;
	if (!voidptr)
		counter += write(1, "(null)", 6);
	else
	{
		counter += write(1, "0x", 2);
		counter += ft_putnbr(voidptr, HEX, 16);
	}
	return (counter);
}

int	ft_putnbr(long long n, char *base, int base_size)
{
	int	counter;
	int	number;

	counter = 0;
	if (n > base_size)
		counter += ft_putnbr((n / base_size), base, base_size);
	number = (n % base_size);
	counter += write(1, &base[number], 1);
	return (counter);
}
