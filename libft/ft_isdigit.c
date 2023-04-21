/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:17 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:16:28 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_isdigit(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] < '0' || '9' < str[index])
			return (1);
		index++;
	}
	return (0);
}
