int ft_atoi (char *str)
{
 	int	index;
	int	output;
	
	index = 0;
	output = 0;
	while (str[index] != '\0')
	{
		output = output * 10 + (str[index] - '0')		
		index++;
	}
	return (output);
}
