/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:08:52 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/29 15:31:52 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	index;
	int	output;
	int	is_negative;

	index = 0;
	output = 0;
	is_negative = 0;
	if (ft_strlen(str) == 0)
		return (0);
	while (ft_strchr(" \t\v\f\r\n", str[index]))
		index++;
	if (ft_strchr("-+", str[index]))
	{
		if (str[index] == '-')
			is_negative = 1;
		else
			is_negative = 0;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
			output = output * 10 + (str[index++] - '0');
	if (is_negative == 1)
		output = (output * -1);
	return (output);
}
