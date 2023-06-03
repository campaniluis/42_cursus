/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:58 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/30 12:13:22 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strchr(const char *str, int to_find)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == (unsigned char)to_find)
			return ((char *)&str[index]);
		index++;
	}
	if (str[index] == (unsigned char)to_find)
		return ((char *)&str[index]);
	return (NULL);
}
