/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:51 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/22 21:04:29 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# define DEC "0123456789"
# define HEX "0123456789abcdef"
// ft_printf.c
int		required(char c, va_list args);
int		ft_printf(const char *format, ...);
// ft_printf_utils.c
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putvoidptr(unsigned long voidptr);
int		ft_putnbr(long long n, char *base, int base_size);

#endif
