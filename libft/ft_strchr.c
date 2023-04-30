/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:57 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/30 13:09:02 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int to_find)
{
	int	index;

	index = 0;

	while (str[index] != '\0')
	{
		if (str[index] == (char)to_find)
			return ((char *)&str[index]);
		index++;
	}
	if (to_find == '\0')
		return ((char *)&str[index]);
	return (NULL);
}
