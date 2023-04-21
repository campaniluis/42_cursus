/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:21 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:16:31 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_isprint(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] < 32)
			return (0);
		index++;
	}
}
