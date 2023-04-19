#include "libft.h"

int	is_set(char  c,char const *set)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (c == set[index])
			return (1);
		index++;
	}
	return (0);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*output;
	int		counter;

	i = 0;
	j = ft_strlen((char *)s1) -1;
	counter = 0;
	while(s1[i] && is_set(s1[i], set))
		i++;
	while(s1[j] && j > i && is_set(s1[j], set))
		j--;
	output = ft_substr(s1, i, j - i + 1);
	return(output);
}
