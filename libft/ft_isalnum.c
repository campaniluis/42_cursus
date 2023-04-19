#include "libft.h"

void    ft_isalnum(char *str)
{
    int index;

    index = 0;
    while(str[index])
    {
        if((str[index] < '0' || '9' < str[index]) ||
            (str[index] < 'a' || 'z' < str[index]) || 
                (str[index] < 'A' || 'Z' < str[index]))
            return (1);
        index++;
    }
    return (0);
}