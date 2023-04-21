/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:11:11 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:19:05 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str1, *char str2, int num)
{
	int	index;

	index = 0;
	while (index <= num && str1[index] == str2[index])
		index++;
	return (str1[index] - str2[index]);
}
