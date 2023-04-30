/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:08:52 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/30 11:45:55 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	index;
	int	output;

	index = 0;
	output = 0;
	while (ft_strchr(" 0-+", str[index]) != NULL)
	{
		if (str[index] == '-')
			output = (output * -1);
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
			output = output * 10 + (str[index] - '0');
			index++;
	}
	if (str[index] > '9')
		return (0);
	return (output);
}
