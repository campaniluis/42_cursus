#include "libft.h"


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	int		s_len;
	char	*output;
	
	index = 0;
	s_len = ft_strlen(s);
	output = (char *)malloc(s_len + 1);
	if(output == '\0' || s == '\0')
		return('\0');
	while(index < s_len)
	{
		output[index] = f(index, s[index]);
		index++;
	}
	output[index] = '\0';
	return(output);
}
