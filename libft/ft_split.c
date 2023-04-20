#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	**output;
	char	*new_str;
	int		index;
	int		new_str_index;
	int		counter;

	index = 0;
	new_str_index = 0;
	counter = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
			counter++;	
		index++;
	}
	*output = (char *)malloc(counter + 1);
	output[counter + 1] = '\0';
	index = 0;
	while (s[index] != '\0')
	{
		output[counter][new_str_index] = (char *)malloc();
			index++;
		if (s[index] == c)
	}
}
