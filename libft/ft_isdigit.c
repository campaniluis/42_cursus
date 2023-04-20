#include "libft.h"

void    ft_isdigit(char *str)
{
	int index;

	index = 0;
	while(str[index])
	{
		if(str[index] < '0' || '9' < str[index])
			return (1);
		index++;
	}
	return (0);
}