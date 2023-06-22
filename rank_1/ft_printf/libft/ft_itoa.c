/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:25 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/05 10:27:28 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*extr_or_zero(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else
		return (ft_strdup("2147483647"));
}

static int	power(int index)
{
	int	power;

	power = 1;
	while (index > 1)
	{
		power = power * 10;
		--index;
	}
	return (power);
}

char	*itoa_write(int index, int n, char *str)
{
	int		counter;
	int		buff;

	counter = 0;
	buff = index;
	if (n < 0)
	{
		n = n * -1;
		str[counter++] = '-';
		index--;
	}
	while (counter < buff)
	{
		str[counter++] = ((n / power(index)) + 48);
		n = (n % power(index--));
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		flag;
	int		index;
	int		buff;

	flag = (n < 0);
	index = 0 + flag;
	buff = n;
	if (n == 0 || n == -2147483648 || n == 2147483647)
	{
		str = extr_or_zero(n);
		return (str);
	}
	while (buff != 0)
	{
		buff /= 10;
		++index;
	}
	str = ft_calloc (sizeof(char), (index + 1));
	if (!str)
		return (0);
	str = itoa_write(index, n, str);
	return (str);
}
