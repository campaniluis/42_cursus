/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:03:40 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/12 16:04:31 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_strchr (char *str, char to_find)
{
	int	index;
	
	index = 0;
	while (str[index] != to_find && str[index] != '\0')
		index++;
	return (str[index]);
}
