#include<stdio.h>
#include<stdlib.h>

typedef struct s_flags
{
	char	*zero;
	char	*minus;
	char	*pochar;
	char	*hashtag;
	char	*plus;
	char	*space;
}t_flags;

// char    *struct_filler(char *temp)
// {
//     t_flags comp_flags;

//     comp_flags.zero =
// }



int	ft_isdigit(int c)
{
	if (c >= '0' && '9' >= c)
		return (1);
	else
		return (0);
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

// int	asteriskos(const char* format, size_t index, va_list args)
// {
// 	int	specif_arg;
// 	if (format[index] == '*')
// 	{
// 		specif_arg = va_arg(args, int);
// 		return(specif_arg);
// 	}
// 	return(0);
// }

// ideia: mudar strchr pra seg arg ser char
char	*ft_strchr(const char *str, int to_find)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == (unsigned char)to_find)
			return ((char *)&str[index]);
		index++;
	}
	if (str[index] == (unsigned char)to_find)
		return ((char *)&str[index]);
	return (NULL);
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
	specif_arg = ft_atoi(specif_str);
	return(specif_arg);
}

int	flag_size_finder(char *temp, int ascii_c, char c, size_t f_index)
{
    size_t  counter;
    // char    *nbr;
    // char    *str;

    counter = 1;
    if (ft_isdigit(temp[counter]))
    { 
		return (numerus(format, f_index));
        // size_t  len;

        // while (ft_isdigit(temp[counter]))
        //     counter++;
        // nbr = malloc(sizeof(char) * counter + 1);
        // len = 0;
        // while(len < counter - 1)
        // {
        //     nbr[len] = temp[len + 1];
        //     len++;
        // }
        // return(nbr);
    }
    else if (temp[counter] == '*')
        return(1);
    return(NULL);
}

int main(void)
{
    char    *temp = "0119d";
    char    *temp2 = "0*d";

    printf("STIRICO: %d\n", flag_size_finder(temp2, 48, '0', 0));
    printf("NUMERO: %d\n", flag_size_finder(temp, 48, '0', 0));

}