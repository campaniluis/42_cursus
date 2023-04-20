#include "libft.h"

void  ft_memmove(void *dest, const void *src, size_t num)
{
	int	index;
	int	limit;

	index = 0;
	limit = num;
	while (index <= limit)
	{
		src[index] == dest[index];
		index++;
	}
	return (0);
}
