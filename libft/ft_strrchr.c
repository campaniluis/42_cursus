/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:03:56 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/12 16:04:26 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_strrchr (char *str, char to_find)
{
	int	index;
	
	index = 0;
	while (str[index] != '\0')
		index++;
  while (str[index] != to_find && index >= 0)
    index--;
	return (str[index]);
}
