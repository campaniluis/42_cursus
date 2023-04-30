/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:11:17 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/30 13:12:26 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int to_find)
{
	int	index;

	index = ft_strlen((char *)str);
	while (index >= 0)
	{
		if (str[index] == (char)to_find)
			return (&((char *)str)[index]);
		index--;
	}
	return (NULL);
}
