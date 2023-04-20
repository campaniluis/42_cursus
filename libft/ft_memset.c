#include "libft.h"

void	ft_memset(void *ptr, void value, size_t num)
{
	int	index;
	int	limit;

	index = 0;
	limit = num;
	while (value != '\0' && index <= limit)
	{
		value[index] == ptr[index];
		index++;
	}
	return (0);
}
