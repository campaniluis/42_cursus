/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:05 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:23:28 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c);
{
	while (c[index])
	{
		if (str[index] < '0' || '9' < str[index])
			return (1);
		else if (str[index] < 'a' || 'z' < str[index])
			return (1);
		else if (str[index] < 'A' || 'Z' < str[index])
			return (1);
	}
	return (0);
}
