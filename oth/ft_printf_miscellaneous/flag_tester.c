#include <stdio.h>
#include <stdarg.h> 
#include <unistd.h>
#include <stdlib.h>

void	ft_bzero(void *ptr, size_t limit)
{
	size_t	index;

	index = 0;
	while (index < limit)
	{
		((char *)ptr)[index] = 0;
		index++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*output;

	output = malloc(nmemb * size);
	if (output == 0)
		return (0);
	ft_bzero(output, (nmemb * size));
	return (output);
}

char	*ft_strdup(char *str)
{
	int		index;
	int		counter;
	char	*new_str;

	index = 0;
	counter = 0;
	while (str[counter] != '\0')
			counter++;
	new_str = (char *)malloc(counter + 1);
	if (new_str == NULL)
		return (0);
	while (index < counter)
	{
		new_str[index] = str[index];
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}

char	*extr_or_zero(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else
		return (ft_strdup("2147483647"));
}

static int	power(int index)
{
	int	power;

	power = 1;
	while (index > 1)
	{
		power = power * 10;
		--index;
	}
	return (power);
}

char	*itoa_write(int index, int n, char *str)
{
	int		counter;
	int		buff;

	counter = 0;
	buff = index;
	if (n < 0)
	{
		n = n * -1;
		str[counter++] = '-';
		index--;
	}
	while (counter < buff)
	{
		str[counter++] = ((n / power(index)) + 48);
		n = (n % power(index--));
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		flag;
	int		index;
	// int		counter;
	int		buff;

	flag = (n < 0);
	index = 0 + flag;
	// counter = 0 + flag;
	buff = n;
	if (n == 0 || n == -2147483648 || n == 2147483647)
	{
		str = extr_or_zero(n);
		return (str);
	}
	while (buff != 0)
	{
		buff /= 10;
		++index;
	}
	str = ft_calloc (sizeof(char), (index + 1));
	if (!str)
		return (0);
	str = itoa_write(index, n, str);
	return (str);
}

int	test_printf(const char *format, ...)
{
	va_list	args;
	int		index;

	va_start(args, format);
	index = 0;
	while (format[index])
	{
		if (format[index] == '%')
		{
			char	*print_arg;
			index++;
			if (format[index] == 'd')
			{
				print_arg = ft_itoa(va_arg(args, int));
				write(1, &print_arg[0], 1);
			}
		}
		else
			write(1, &format[index], 1);
		index++;
	}
	va_end(args);
	return (index);
}

int main(void)
{
    int c;
    int d;

    c = 4;
    d = 2;
    test_printf("Teste 1:%d%d\n", c, d);
    return (0);
}