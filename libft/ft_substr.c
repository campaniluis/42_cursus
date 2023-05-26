/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:11:30 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/25 17:52:49 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	int		size;
	char	*new_str;

	index = 0;
	if (start >= ft_strlen((char *)s))
		size = 1;
	else if (len < ft_strlen((char *)s))
		size = (len + 1);
	else
		size = ft_strlen((char *)s) - start + 1;
	new_str = (char *)malloc(sizeof(char) * size);
	if (!new_str)
		return (NULL);
	while (index < len && start < ft_strlen((char *)s) && s[start])
	{	
		new_str[index] = s[start];
		index++;
		start++;
	}
	new_str[index] = '\0';
	return (new_str);
}
