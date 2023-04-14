int ft_atoi (char *str)
{
	int length;
 	int	index;
	int	output;
	
	index = 0;
	length = 0;
	output = 0;
	while (str[length] != '\0')
		length++;
	while (index < length)
	{
		output = output * 10 + (str[index] - '0')		
		index++;
	}
	return (output);
}
