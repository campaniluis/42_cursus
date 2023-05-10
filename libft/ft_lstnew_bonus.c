/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:09:56 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/10 13:16:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list  *lst;

	lst = (char *)ft_calloc((char *) content);
	if (!lst)
	    return (NULL);
	lst->content = content;
	lst->next = NULL;
	return(lst);
}
