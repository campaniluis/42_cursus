/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:10:11 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/12 16:29:23 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;

	new = ft_calloc(sizeof(char), (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, ft_strlen((char *)s1) + 1);
	ft_strlcat(new, s2, ft_strlen((char *)s2) + ft_strlen((char *)s1) + 1);
	return (new);
}
