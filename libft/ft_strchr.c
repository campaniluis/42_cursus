/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:57 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/23 09:40:42 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr (const char *str, int to_find)
{
	int	index;

	index = 0;
	while (str[index] != to_find && str[index] != '\0')
		index++;
	return (str[index]);
}
