/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:11:30 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/05 21:24:54 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*new_str;

	index = 0;
	new_str = (char *)malloc(len + 1);
	if (start > len || !s)
		return (0);
	while (index < len && s[start + index] != '\0')
	{	
		new_str[index] = s[start + index];
		index++;
	}
	if (s[start + index] == '\0')
		return (0);
	else
	{
		new_str[len] = '\0';
		return (new_str);
	}
}
