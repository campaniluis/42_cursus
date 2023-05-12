/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:10:11 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/12 16:04:53 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strjoin(char *s1, char *s2)
{
	int		count1;
	int		count2;
	int 	index;
	char	*output;

	count1 = 0;
	count2 = 0;
	index = 0;
	
	output = (char *)malloc(sizeof(count1 + count2 +1))
	while (index < count1)
	{
		output[index] = s1[index];
		index++;
	}

	index = 0;
	while (index < count2)
	{
		output[count1 + index] = s2[index];
		index++;
	}
	return (output);
}
