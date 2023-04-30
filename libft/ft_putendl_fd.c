/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:41:17 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/30 11:29:01 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		size;
	char	linebreak;

	size = ft_strlen(s);
	linebreak = '\n';
	write(fd, s, size);
	write(fd, &linebreak, 1);
}
