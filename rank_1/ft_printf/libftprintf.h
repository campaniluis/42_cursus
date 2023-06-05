/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:51 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/30 12:11:56 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

// libft functions
int	ft_atoi(const char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
// char	*ft_itoa(int n);
char	*ft_strchr(const char *str, int to_find);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);

// printf.c
int 	ft_printf(const char *, ...);
// printf_utils.c
// int		trigger(const char *format, char *flags);

// ft_printf_flags.c
void	required(char c);
void    bonus(const char *format, char c, size_t index);
#endif
