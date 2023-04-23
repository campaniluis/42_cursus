/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:11:17 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/23 11:15:23 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr (const char *str, int to_find)
{
	int	index;

	index = ft_strlen(str) - 1;
	while (str[index] != to_find && index >= 0)
		index--;
	return (str[index]);
}
