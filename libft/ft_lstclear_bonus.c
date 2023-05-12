/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:08:21 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/12 15:12:11 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*buff;

	buff = ft_lstlast(*lst);
	if (ft_lstsize(*lst) == 1)
		
	while (buff != *lst)
	{
		ft_lstdelone(buff, del);
		buff = ft_lstlast(*lst);
	}
	if (buff == *lst)
		del(*lst);
}
