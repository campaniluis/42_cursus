/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:10:02 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:18:03 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// duplicate of a string
// allocating memory for the duplicate string
char	*ft_strdup (char *str)
{
	int		index;
	int		counter;
	char	*new_str;

	index = 0;
	counter = 0;
	while (str[counter] != '\0')
			counter++;
	new_str = (char *)malloc(counter + 1);
	while (index < counter)
	{
		new_str[index] = str[index];
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}
