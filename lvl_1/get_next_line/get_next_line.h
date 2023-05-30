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

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

// get_next_line_utils.c
// char	*ft_substr(char const *s, unsigned int start, size_t len);
// size_t	ft_strlen(const char *str);
// char	*ft_strjoin(char const *s1, char const *s2)

// get_next_line.c
// char	*get_next_line(int fd);
char    *read_file(const char *str);
size_t find_newline(const char *str);


#endif
