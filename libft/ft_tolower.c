/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:11:34 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:20:20 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(char uppercase)
{
	char	lowercase;

	lowercase = (uppercase - 32);
	if (uppercase >= 65 && uppercase <= 90)
		return (lowercase);
}
