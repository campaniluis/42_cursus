int	flag_value_finder(const char *temp, size_t  index, va_list args)
{
	int	value;

    if (ft_isdigit(temp[index]))
		value = numerus(temp, index);
	else if (temp[index] == '*')
        value = asteriskos(temp, index, args);
	else
		value = 0;
    return(value);
}

int	value_zero(const char *format, size_t index, va_list args)
{
	int		blanks_size;
	int		counter;
	char	blanks;
	int		size_next_arg;
	char	*next_arg;

	blanks = '0';
	index++;
	blanks_size = flag_size_finder(format, index, args);
	counter = 0;
	while(format[index + counter] == '*' || ft_isdigit(format[index + counter]))
		counter++;
	if (trigger(format[index + counter], "sdiuxX"))
	{
		next_arg = required(format[index + counter], args);
		size_next_arg = ft_strlen(next_arg);
		while (size_next_arg++ < blanks_size)
			write(1, &blanks, 1);
		write_argument(next_arg, size_next_arg);
		return (counter);
	}
	return (0);
}
