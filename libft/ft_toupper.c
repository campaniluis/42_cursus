/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:11:38 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:27:15 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(char lowercase)
{
	char	uppercase;

	uppercase = (lowercase - 32);
	if (lowercase >= 97 && lowercase <= 122)
		return (uppercase);
}
