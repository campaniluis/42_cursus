/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:09:56 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/08 10:46:48 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	size_t	content_size;
	t_list	next;

	content_size = ft_strlen((char *)content);
	next = calloc(content, sizeof(t_list));
	next = ft_strdup((char *)content);
	return (next);
}
