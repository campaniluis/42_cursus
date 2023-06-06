/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:51 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/06 11:41:38 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

// typedef struct s_flags
// {
// 	int	zero;
// 	int	minus;
// 	int	point;
// 	int	hashtag;
// 	int	plus;
// 	int	space;
// }t_flags;

// libft functions
int		ft_atoi(const char *str);
void	ft_bzero(void *ptr, size_t limit);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
char	*ft_itoa(int n);
char	*ft_strchr(const char *str, int to_find);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(char *str);

// printf.c
int		ft_printf(const char *, ...);
// printf_utils.c
int		trigger(const char c, char *flags);

// ft_printf_flags.c
char	*required(char c, va_list args);
int		bonus_minus(const char *format, size_t index, va_list args);
int		bonus_zero(const char *format, size_t index, va_list args);
int		bonus_point(const char *format, size_t index, va_list args);
void	bonus(const char *format, char c, size_t index, va_list args);
#endif
