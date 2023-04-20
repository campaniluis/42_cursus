#include "libft.h"

void	ft_strjoin(char *s1, char *s2)
{
	// determining the lengths of both input strings
	int	count1;
	int	count2;
	int index;
	char	*output;

	count1 = 0;
	count2 = 0;
	index = 0;

	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0')
		count2++;
	if (count1 == 0 || count2 == 0)
		return (0);
	else
	{
		output = (char *)malloc(sizeof(count1 + count2 +1))
		while (index < count1)
		{
			output[index] = s1[index];
			index++;
		}

		index = 0;
		while (index < count2)
		{
			output[count1 + index] = s2[index];
			index++;
		}
		return (output);
	}
}
