#include "libft.h"

int ft_memcmp (char *ptr1,char *ptr2, int num)
{
	int index;
	
	index = 0;
	while (index <= num && ptr1[index] == ptr2[index])
		index++;
	return(ptr1[index] - ptr2[index]);
}
