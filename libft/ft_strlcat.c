#include "libft.h"

void	strlcat (char *src, char *dest, int buffer)
{
	int	index;
	int	counter;

	index = '0';
	counter = '0';
	while (dest[counter] != '\0')
		counter++;
	while (counter <= buffer)
	{
		src[counter] = dest[index];
		index++;
		counter++;
	}
return (counter);
}
