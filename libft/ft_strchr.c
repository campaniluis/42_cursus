/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:57 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:09:58 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strchr(char *str, char to_find)
{
	int	index;

	index = 0;
	while (str[index] != to_find && str[index] != '\0')
		index++;
	return (str[index]);
}
