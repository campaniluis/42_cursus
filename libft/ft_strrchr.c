ft_strrchr (char *str, char to_find)
{
	int	index;
	
	index = 0;
	while (str[index] != '\0')
		index++;
  while (str[index] != to_find && index >= 0)
    index--;
	return (str[index]);
}
