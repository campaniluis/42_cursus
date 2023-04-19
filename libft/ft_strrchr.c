#include "libft.h"

char	*ft_strrchr (char *str, char to_find)
{
	int	index;
	
	index = ft_strlen(str) - 1;
	
	while (str[index] != to_find && index >= 0)
		index--;
	return (str[index]);
}
