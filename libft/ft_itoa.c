/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:25 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/01 19:10:08 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		index;
	char	*output;
	int		is_negative;

	index = 0;
	 // Alloue (avec malloc(3)) et 
	is_negative = 0;
	if (n == 0)
		return ("0");
	while (n != 0)
	{
		n /= 10;
		++index;
	}
	// Les nombres négatifs doivent être gérés.
	if (n < 0)
	{
		output = malloc (sizeof(char) * index + 2);
		output[0] = '-';
	}
	output = malloc (sizeof(char) * index + 1);
	//retourne une string représentant l’entier ’n’. 
	return (output);
}
