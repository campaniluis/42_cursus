/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:58 by lclaudio          #+#    #+#             */
/*   Updated: 2023/06/06 11:39:31 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	numerus(const char* format, size_t index)
{
	char	*specif_str;
	int		specif_arg;
	size_t	counter;
	size_t	len;

	if (!ft_isdigit(format[index]))
		return(0);
	len = 0;
	while (ft_isdigit(format[index + len]))
		len++;
	specif_str = malloc(sizeof(char) * len);
	counter = 0;
	while(counter < len)
	{
		specif_str[counter] = format[counter + index];
		counter++;
	}
	specif_arg = ft_atoi(specif_str);
	return(specif_arg);
}

int	asteriskos(const char* format, size_t index, va_list args)
{
	int	specif_arg;
	if (format[index] == '*')
	{
		specif_arg = va_arg(args, int);
		return(specif_arg);
	}
	return(0);
}

int	flag_size_finder(const char *temp, size_t  index, va_list args)
{
	int	size;

    if (ft_isdigit(temp[index]))
		size = numerus(temp, index);
	else if (temp[index] == '*')
        size = asteriskos(temp, index, args);
	else
		size = 0;
    return(size);
}

void	write_argument(const char *arg, size_t arg_size)
{
	size_t	counter;

	counter = 0;
	while (counter < arg_size)
	{	
		write(1, &arg[counter], 1);
		counter++;
	}
}

size_t	not_alpha_len(const char *str, size_t index)
{
	size_t	counter;

	counter = 0;
	while (str[index + counter] != '\0' && !ft_isalpha(str[index + counter]))
		counter++;
	return (counter);
}

int	trigger(const char c, char *flags)
{
	int	counter;

	counter = 0;
	while (flags[counter] != '\0')
	{
		if (c == flags[counter])
			return (1);
		counter++;
	}
	return (0);
}
