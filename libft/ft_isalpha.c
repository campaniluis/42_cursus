/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:09 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:24:24 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_isalpha(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] < 'a' || 'z' < str[index])
			return (1);
		else if (str[index] < 'A' || 'Z' < str[index])
			return (1);
		index++;
	}
	return (0);
}
