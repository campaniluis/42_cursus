/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:07:12 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/29 19:23:10 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free (lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*buff;

	buff = *lst;
	while (buff)
	{
		buff = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = buff;
	}
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*buff;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		buff = ft_lstlast(*lst);
		buff->next = new;
	}
}

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

void	*f(struct t_list lst)
{
	lst.content = lst.content + 1;
	return(lst.content);
}

void	*del(struct t_list lst)
{
	lst.content = NULL;
	lst->next = NULL;
	return(lst);
}

int	main(void)
{
	struct t_list	head;
	struct t_list	second;
	struct t_list	third;

	head = malloc(sizeof(t_list));
	second = malloc(sizeof(t_list));
	third = malloc(sizeof(t_list));
	head.content = 1;
	head->next = second;
	second.content = 2;
	head->next = third;
	third.content = 3;
	head->next = NULL;
	printList(ft_lstmap(head, f, del));
}