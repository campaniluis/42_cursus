/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:10:11 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/22 09:42:42 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	char	len;

	len = (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	new = ft_calloc(sizeof(char), len);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, ft_strlen((char *)s1) + 1);
	ft_strlcat(new, s2, ft_strlen((char *)s2) + ft_strlen((char *)s1) + 1);
	return (new);
}
