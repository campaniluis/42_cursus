#include "libft.h"

// duplicate of a string
// allocating memory for the duplicate string
char	*ft_strdup (char *str)
{
	int	index;
	int	counter;
	char	*new_str;

	index = 0;
	counter = 0;
	while (str[counter] != '\0')
			counter++;
	new_str = (char *)malloc(counter + 1);
	while (index < counter)
	{
		new_str[index] = str[index];
		index++;
	}
	new_str[index] = '\0';
	return (new_str);
}
