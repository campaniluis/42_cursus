#include <stdio.h>
#include <stdlib.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && '9' >= c)
		return (1);
	else
		return (0);
}

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
	specif_arg = atoi(specif_str);
	return(specif_arg);
}

int	flag_size_finder(char *temp, int ascii_c, char c, size_t f_index)
{
    size_t  counter;

    counter = 1;
    if (ft_isdigit(temp[counter]))
    { 
		return (numerus(temp, counter));
    }
    else if (temp[counter] == '*')
        return (asteriscus(temp, counter));
    return(0);
}

int main(void)
{
    char    *temp = "0119d";
    char    *temp2 = "0*d";

    printf("STIRICO: %d\n", flag_size_finder(temp2, 48, '0', 0));
    printf("NUMERO: %d\n", flag_size_finder(temp, 48, '0', 0));
}