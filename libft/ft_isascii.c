#include "libft.h"

void	ft_isascii(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] < 0 || 127 < str[index])
			return (0);
		index++;
	}
}
