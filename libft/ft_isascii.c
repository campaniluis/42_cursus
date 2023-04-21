/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:12 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:09:14 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_isascii(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] < 0 || 127 < str[index])
			return (0);
		index++;
	}
}
