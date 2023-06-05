#include "libftprintf.h"


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
int	bonus_zero(const char *format, size_t index, va_list args)
{
	int		blanks_size;
	int		counter;
	char	blanks;
	int		size_next_arg;
	char	*next_arg;

	index++;
	blanks = '0';
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
	// precisa de um while
	// if so: the next va_arg will be the number of digits, and after that, the actual number to be printed
int	bonus_point(const char *format, size_t index, va_list args)
{
	int		nbr_size;
	int		counter;
	char	*next_arg;

	index++;
	if (format[index] == '*')
	{
		index++;
		counter = 0;
		if (trigger(format[index], "sdiuxX"))
		{
			nbr_size = va_arg(args, int);
			next_arg = required(format[index], args);
			while (counter++ < nbr_size)
				write(1, &next_arg[0], 1);
			return (nbr_size);
		}
	}
	return (0);
}


//
void	bonus(const char *format, char c, size_t index, va_list args)
{

// especifica o n de chars a ler do argumento
	if (c == '-')
		bonus_minus(format, index, args);
	if (c == '0')
		bonus_zero(format, index, args);
    if (c == '.')
		{
			bonus_point(format, index, args);
		}
}
