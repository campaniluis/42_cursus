/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:58 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/22 23:19:33 by lclaudio         ###   ########.fr       */
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
			counter += write(1, &s[counter], 1);
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
		counter += write(1, "(nil)", 5);
	else
	{
		counter += write(1, "0x", 2);
		counter += ft_putnbr(voidptr, HEX_MIN, 16);
	}
	return (counter);
}

int	ft_putnbr(unsigned long long n, char *base, unsigned int base_size)
{
	int	counter;
	int	number;

	counter = 0;
	if (n > base_size)
		counter += ft_putnbr((n / base_size), base, base_size);
	if (n == base_size)
		counter += write(1, "1", 1);
	number = (n % base_size);
	counter += write(1, &base[number], 1);
	return (counter);
}

int	ft_putnbr_neg(long long n, char *base, int base_size)
{
	int	counter;

	counter = 0;
	if (n < 0)
	{
		counter += write(1, "-", 1);
		n = (n * -1);
	}
	counter += ft_putnbr(n, base, base_size);
	return (counter);
}
