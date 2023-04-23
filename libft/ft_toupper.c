/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:11:38 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/23 11:20:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int lowercase)
{
	int	uppercase;

	uppercase = (lowercase - 32);
	if (lowercase >= 97 && lowercase <= 122)
		return (uppercase);
}
