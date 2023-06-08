#include "libftprintf.h"

// char	*flag_reader(const char *format, size_t index, va_list args)
char	*flag_reader(const char *format, size_t index)
{
	char	*temp;
	size_t	temp_len;
	size_t	counter;

	temp_len = not_alpha_len(format, index);
	temp = malloc(temp_len * sizeof(char));
	counter = 0;
	while(counter < temp_len)
	{
		temp[counter] = format[counter + index];
		counter++;
	}
	// se for um char da struct
	// voce vai pegar a struct
	// ver se eh asterisco
	// e salvar o valor
	return(temp);
}

char	*required(char c, va_list args)
{
	char	*next_arg;

	if (c == 'd')
	{
		next_arg = ft_itoa(va_arg(args, int));
		return (next_arg);
	}
	else
		return (0);
}

// Double check if "sdiuxX" is true
int	bonus_minus(const char *format, size_t index, va_list args)
{
	int		blanks_size;
	int		counter;
	char	blanks;
	int		size_next_arg;
	char	*next_arg;

	index++;
	blanks = ' ';
	counter = 0;
	if (trigger(format[index], "sdiuxX"))
	{
		blanks_size = va_arg(args, int);
		next_arg = required(format[index], args);
		size_next_arg = ft_strlen(next_arg);
		while (counter++ < blanks_size - size_next_arg)
			write(1, &blanks, 1);
		write(1, &next_arg[0], size_next_arg);
		return (blanks_size);
	}
	return (0);
}

// Double check if "sdiuxX" is true
int	bonus_zero(const char *format, size_t index, va_list args, int	size)
{
	int		counter;
	char	blanks;
	int		size_next_arg;
	char	*next_arg;

	blanks = '0';
	index++;
	counter = 0;
	if (trigger(format[index + counter], "sdiuxX"))
	{
		next_arg = required(format[index + counter], args);
		size_next_arg = ft_strlen(next_arg);
		while (size_next_arg++ < size)
			write(1, &blanks, 1);
		write_argument(next_arg, size_next_arg);
		return (counter);
	}
	return (0);
}

	// precisa de um while
	// if so: the next va_arg will be the number of digits, and after that, the actual number to be printed
int	bonus_point(const char *format, size_t index, va_list args)
{
	int		nbr_size;
	int		counter;
	char	*next_arg;

	index++;
	nbr_size = asteriskos(format, index, args);
	counter = 0;
	if (trigger(format[index], "sdiuxX"))
	{
		next_arg = required(format[index], args);
		while (counter++ < nbr_size)
			write(1, &next_arg[0], 1);
		return (nbr_size);
	}
	return (0);
}

// int	bonus_hashtag(const char *format, size_t index, va_list args)
// {

// }

// Double check if "sdiuxX" is true
int	bonus_space(const char *format, size_t index, va_list args)
{
	char	*next_arg;
	char	space;
	size_t	counter;
	size_t	size;

	index++;
	space = ' ';
	if (trigger(format[index], "diuxX"))
	{
		next_arg = required(format[index], args);
		size = ft_strlen(next_arg);
		if (next_arg[0] != '-')
			write(1, &space, 1);
		counter = 0;
		while (counter < size)
		{
			write(1, &next_arg[counter], 1);
			counter++;
		}
	}
	return (0);

}

// Double check if "sdiuxX" is true
int	bonus_plus(const char *format, size_t index, va_list args)
{
	char	*next_arg;
	char	plus;
	size_t	counter;
	size_t	size;

	index++;
	plus = '+';
	if (trigger(format[index], "diuxX"))
	{
		next_arg = required(format[index], args);
		size = ft_strlen(next_arg);
		if (next_arg[0] != '-')
			write(1, &plus, 1);
		counter = 0;
		while (counter < size)
		{
			write(1, &next_arg[counter], 1);
			counter++;
		}
	}
	return (0);
}

int	bonus(const char *format, char c, size_t index, va_list args)
{
	size_t	counter;
	t_flags	flags;

	counter = 0;
// especifica o n de chars a ler do argumento
	if (c == '-')
		bonus_minus(format, index, args);
	if (c == '0')
	{
		counter = counter + flag_size_finder(format, index, args);
		flags.zero = bonus_zero(format, index, args, counter);
	}
	if (c == '.')
		bonus_point(format, index, args);
    // if (c == '#')
	// 	bonus_hashtag(format, index, args);
    if (c == ' ')
		bonus_space(format, index, args);
    if (c == '+')
		bonus_plus(format, index, args);
	while(format[index + counter] == '*' || ft_isdigit(format[index + counter]))
		counter++;
	return (counter);
}
