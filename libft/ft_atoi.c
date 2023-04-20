#include "libft.h"

int ft_atoi (char *str)
{
	int	index;
	int	output;
	
	index = 0;
	output = 0;
	while (str[index] != '\0')
	{
		if (str[index] == ' ')
			index++;
		else if (str[index] == '-')
		{
			output = (output * -1);
			index++;
		}
		else if (str[index] == '+')
			index++;
		if (str[index] == '0')
			index++;
		else if (str[index] >= '1' && str[index] <= '9')
		{
			while (str[index] >= '0' && str[index] <= '9')	
			{
				output = output * 10 + (str[index] - '0');
				index++;
			}
			break;
		}
	else
		return(0);
	}
	return (output);
}
