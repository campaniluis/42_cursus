/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:10:17 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:10:19 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcpy(char *origin, char *dest)
{
	int	index;
	int	origin_length;

	index = 0;
	origin_length = ft_strlen(origin);
	dest = malloc (sizeof(char) * origin_length);
	while (index <= origin_length)
	{
		dest[index] = origin[index];
		index++;
	}
	return (dest);
}
