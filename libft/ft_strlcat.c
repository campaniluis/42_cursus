/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:10:14 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/23 11:16:54 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *src, char *dest, int buffer)
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
