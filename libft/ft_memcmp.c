/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:32 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:17:12 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(char *ptr1, char *ptr2, int num)
{
	int	index;

	index = 0;
	while (index <= num && ptr1[index] == ptr2[index])
		index++;
	return (ptr1[index] - ptr2[index]);
}
