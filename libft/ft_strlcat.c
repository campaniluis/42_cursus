/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:10:14 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:28:31 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	strlcat(char *src, char *dest, int buffer)
{
	int	index;
	int	counter;

	index = '0';
	counter = '0';
	while (dest[counter] != '\0')
		counter++;
	while (counter <= buffer)
	{
		src[counter] = dest[index];
		index++;
		counter++;
	}
	return (counter);
}
