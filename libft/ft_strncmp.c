/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:38:09 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/13 09:38:13 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_strncmp (char *str1, *char str2, int num)
{
	int index;
	
	index = 0;
	while (index <= num && str1[index] == str2[index])
		index++;
	// returns int of result comparison
	return (str1[index] - str2[index]);
}
