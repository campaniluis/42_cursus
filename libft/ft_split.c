char **ft_split(char const *s, char c)
{
	char **output;
	char *new_str;
	int	index;
	int	new_str_index;
	int	counter;
	
	index = 0;
	new_str_index = 0;
	counter = 0;
	

	// counting the number of substrings
	while (s[index] != '\0')
	{
		if (s[index] == c)
			counter++;	
		index++;
	}

	// allocate memory for an array of pointers to strings
	*output = (char *)malloc(counter + 1);
	output[counter + 1] = '\0'; 
	index = 0;
	while(s[index] != '\0')
	{
		
		// allocate memory for each individual split string.
		// creates a new string
		output[counter][new_str_index] = (char *)malloc();
		
		// iterating over the input string s, 
			index++;
		// creating a new string whenever you encounter c.
		if (s[index] == c)
	}
}
