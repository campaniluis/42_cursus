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

index = 0;
	// allocate memory for an array of pointers to strings
	 
	*output[counter] = (char *)malloc(counter + 1);
	
	while(s[index] != '\0')
	{
		// creates a new string
		output[current_counter][new_str_index] =  
		
		// allocate memory for each individual split string. 
		// iterating over the input string s, 
		// creating a new string whenever you encounter c.
	}
}
