/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:46:48 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/27 15:54:23 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;

	if (n == 2147483647 || n == -2147483648)
	{
		if (n > 0)
			write(fd, "2147483647", 10);
		else
			write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n > 10)
		ft_putnbr_fd(n / 10, fd);
	if (n == 10)
		write(fd, "10", 2);
	else
	{
		digit = 48 + (n % 10);
		write(fd, &digit, 1);
	}
}
