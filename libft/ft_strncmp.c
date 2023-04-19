#include "libft.h"

int	ft_strncmp (char *str1, *char str2, int num)
{
	int index;
	
	index = 0;
	while (index <= num && str1[index] == str2[index])
		index++;
	// returns int of result comparison
	return (str1[index] - str2[index]);
}
