
#include "libft.h"

void	ft_memset(void *ptr, int value, size_t num)
{
	size_t	index;

	if (num < 0 || ptr == NULL)
		return (0);
	index = 0;
	while (ptr[index] && index < num)
	{
		((char *)ptr)[index] = value;
		index++;
	}
	return ((void)ptr);
}
