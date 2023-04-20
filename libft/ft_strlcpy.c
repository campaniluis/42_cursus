#include "libft.h"

char	*ft_strlcpy(char *origin, char *dest)
{
	int index;
	int origin_length;

	index = 0;
	origin_length = ft_strlen(origin);
	dest = malloc (sizeof(char) * origin_length);
	while(index <= origin_length)
	{
		dest[index] = origin[index];
		index++;
	}
	return (dest);
}
