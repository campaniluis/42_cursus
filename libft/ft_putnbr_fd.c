/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:46:48 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/26 12:31:45 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char digit;
	
	if (n == 2147483647)
	{
		write(fd, "2147483647", 10);
		return ;
	}
	else if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}	
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n >= 10)
	{
		if (n == 10)
		{
			write(fd, "10", 2);
			
		}
		ft_putnbr_fd(n / 10, fd);
	}
	else
	{
		digit = 48 + (n % 10);
		write(fd, &digit, 1);
	}
}

int main(void)
{
	printf("ft_putnbr_fd(1, 1): \n");
	ft_putnbr_fd(1, 1);
	printf("\nft_putnbr_fd(103, 1): \n");
	ft_putnbr_fd(103, 1);
	printf("\nft_putnbr_fd(-103, 1): \n");
	ft_putnbr_fd(-103, 1);
	printf("\nft_putnbr_fd(-10, 1): \n");
	ft_putnbr_fd(-10, 1);
	printf("\nft_putnbr_fd(-1, 1): \n");
	ft_putnbr_fd(-1, 1);
	printf("\nft_putnbr_fd(2147483647, 1): \n");
	ft_putnbr_fd(2147483647, 1);
	printf("\nft_putnbr_fd(-2147483648, 1): \n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n\n");
	return 0;
}
