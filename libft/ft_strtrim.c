char *ft_strtrim(char const *s1, char const *set)
{
	char *output;
	int	count_set;
	int index;
	int find_set;
	int s1_len;
	
	count_set = 0;
	index = 0;
	find_set = 0;
	s1_len = 0;
	while (s1[s1_len] != '\0')
		s1_len++;
	while (set[count_set] != '\0')
		count_set++;
	if (s1 == '\0')
		return(0);
	else if (s1_len <= count_set)
	// return new empty string
		return(); 
	else
	{
		output = (char *)malloc(s1_len - count_set + 1);
		while (index < s1_len)
		{
			if (s1[index] == set[0])
			{
				while(find_set < count_set)
				{
					if (s1[index + find_set] == set[find_set])
						find_set++;
					else
					{
						find_set = 0;
						break;
					}
				// than it is not the searched string
				}
				// if it is, remove it from s1
				index = index + count_set;
			}
			output [index] = s1[index];
		}
		output[s1_len - count_set] = '\0';
		return(output);
	}
}
