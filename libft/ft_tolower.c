/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:11:34 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/23 11:20:21 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int uppercase)
{
	int	lowercase;

	lowercase = (uppercase - 32);
	if (uppercase >= 65 && uppercase <= 90)
		return (lowercase);
}
