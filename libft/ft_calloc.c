/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:01 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:25:31 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_calloc(int num, sizeof(size))
{
	int		index;
	char	*total_size;

	index = 0;
	*total_size = (char *)malloc * (num * sizeof(size))
	while (index < num)
	{
		total_size[index] = 0;
		index++;
	}
	return (*total_size);
}
