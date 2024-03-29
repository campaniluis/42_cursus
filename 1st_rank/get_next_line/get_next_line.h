/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:12:15 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/03 17:51:25 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

// get_next_line_utils.c
void	ft_bzero(void *ptr, size_t limit);
void	*ft_calloc(size_t nmemb, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int to_find);
char	*ft_strjoin(char const *s1, char const *s2);

// get_next_line.c
size_t	line_size(char *str);
char	*get_a_line(char *str);
char	*buff_clean(char *buff);
char	*complete_line(int fd, char *buff);
char	*get_next_line(int fd);

#endif
