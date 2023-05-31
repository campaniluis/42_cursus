/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:12:15 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/30 12:12:17 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFF_SIZE
# define BUFF_SIZE 100
#endif

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

// get_next_line_utils.c
void	ft_bzero(void *ptr, size_t limit);
void	*ft_calloc(size_t nmemb, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int to_find);
char	*ft_strjoin(char const *s1, char const *s2);

// get_next_line.c
char    *get_line(int fd, char *str);
size_t  line_size(char *str);
char    *complete_line(size_t counter, char *str);
char	*get_next_line(int fd);

#endif
