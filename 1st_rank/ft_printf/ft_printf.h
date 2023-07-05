/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:51 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/22 23:21:47 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# define DEC "0123456789"
# define HEX_MIN "0123456789abcdef"
# define HEX_MAX "0123456789ABCDEF"

// ft_printf.c
int		required(char c, va_list args);
int		ft_printf(const char *format, ...);
// ft_printf_utils.c
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		ft_putvoidptr(unsigned long voidptr);
int		ft_putnbr(unsigned long long n, char *base, unsigned int base_size);
int		ft_putnbr_neg(long long n, char *base, int base_size);

#endif
