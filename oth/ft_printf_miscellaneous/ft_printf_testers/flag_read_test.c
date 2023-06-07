#include <stdio.h>
#include <stdlib.h>


size_t	trigger(const char c, char *flags)
{
	size_t	counter;

	counter = 0;
	while (flags[counter] != '\0')
	{
		if (c == flags[counter])
			return (1);
		counter++;
	}
	return (0);
}

int	ft_isalpha(int c)
{	
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

size_t	not_alpha_len(const char *str, size_t index)
{
	size_t	counter;

	counter = 0;
	while (str[index + counter] != '\0' && !ft_isalpha(str[index + counter]))
		counter++;
	return (counter);
}

// char	*flag_reader(const char *format, size_t index, va_list args)
char	*flag_reader(const char *format, size_t index)
{
	char	*temp;
	size_t	temp_len;
	size_t		counter;

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


int	main()
{
	const char	*format = "042 *-13";
	size_t		index;

	index = 0;
	printf("Temp: %s\n", flag_reader(format, index));
	printf("IS NOT ALPHA LEN: %ld\n", not_alpha_len(format, 0));
	// printf("IS ALPHA: %d", ft_isalpha("1i29029"));
}