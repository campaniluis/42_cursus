/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:07:12 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/30 09:37:57 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*buff;
	t_list	*head;

	if (!lst)
		return (NULL);
	head = NULL;
	while (lst)
	{
		buff = ft_lstnew(f(lst->content));
		if (buff == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, buff);
		lst = lst->next;
	}
	return (head);
}
