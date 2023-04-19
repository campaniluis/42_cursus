#include "libft.h"

void	ft_strchr (char *str, char to_find)
{
	int	index;
	
	index = 0;
	while (str[index] != to_find && str[index] != '\0')
		index++;
	return (str[index]);
}
