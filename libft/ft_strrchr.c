/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:11:17 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:19:21 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, char to_find)
{
	int	index;

	index = ft_strlen(str) - 1;
	while (str[index] != to_find && index >= 0)
		index--;
	return (str[index]);
}
