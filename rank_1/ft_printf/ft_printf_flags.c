#include "libftprintf.h"

// 
void	required(char c)
{
    printf("required: %c\n", c);
}

int bonus_point(const char *format, char c, size_t index)
{
	char	*str_size;
	size_t	len;
	size_t	counter;

	index++;
	counter = 0;
	while(ft_isdigit(format[index + counter]))
		counter++;
	str_size = malloc(sizeof(char) * (counter + 1));
	str_size = ft_substr(format, index, counter);
	len = ft_atoi(str_size);
	printf("HERE size: %zu\n", len);
	index += counter;
	free(str_size);
	return (len);
}

//
void	bonus(const char *format, char c, size_t index)
{

// especifica o n de chars a ler do argumento
    if (c == '.')
        bonus_point(format, c, index);
}
