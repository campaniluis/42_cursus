char *ft_strtrim(char const *s1, char const *set)
{
	int		frst_trg_index;
	int		last_trg_index;
	char	*output;

	frst_trg_index = 0;
	last_trg_index = ft_strlen(s1) -1;
	while(s1[frst_trg_index]== *set)
		frst_trg_index++;
	while(s1[last_trg_index]== *set && last_trg_index > frst_trg_index)
		last_trg_index--;
	output = (char*)malloc(last_trg_index - frst_trg_index + 2);
	if (output == '\0')
		return ('\0');
	while (index <= last_trg_index - frst_trg_index)
	{
		output[index] = s1[index + frst_trg_index];
		index++;
	}
	output[index] = '\0';
	return(output);
}
