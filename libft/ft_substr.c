// s: La chaîne de laquelle extraire la nouvelle chaîne.
// start: L’index de début de la nouvelle chaîne dans la chaîne ’s’.
// len: La taille maximale de la nouvelle chaîne.

// malloc allowed

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int	index;
	char *new_str;
	
	index = 0;
	new_str = (char*)malloc(len + 1); 
	
	while (index < len && s[start + index] != '\0')
	{	
		// copy the appropriate characters from s into new_str
		new_str[index] = s[start + index];
		index++;
	}
	// La nouvelle chaîne de caractères.
	if (s[start + index] == '\0')
		return (0);
	else
	{
		new_str[len] = '\0';
		return (*new_str);
	}
}

  
