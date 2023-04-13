/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:38:41 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/13 09:38:43 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// search for a specific byte value within a block of memory
ft_memchr (void *ptr, int value, int num)
{
	int index;
	
	index = 0;
	
	while (index <= num)
	{
		
		index++;
		if (ptr[index] == value)
			return (ptr[index]);
	}
	return(0);
}
