#include "libft.h"

void    ft_isprint(char *str)
{
	int index;

	index = 0;
	while(str[index])
	{
		if (str[index] < 32)
			return (0);
		index++;
	}
}