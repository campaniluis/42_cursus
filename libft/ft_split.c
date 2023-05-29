/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:54 by lclaudio          #+#    #+#             */
/*   Updated: 2023/05/28 19:34:34 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	int		size;
	char	*new_str;

	index = 0;
	if (start >= ft_strlen((char *)s))
		size = 1;
	else if (len < ft_strlen((char *)s))
		size = (len + 1);
	else
		size = ft_strlen((char *)s) - start + 1;
	new_str = (char *)malloc(sizeof(char) * size);
	if (!new_str)
		return (NULL);
	while (index < len && start < ft_strlen((char *)s) && s[start])
	{	
		new_str[index] = s[start];
		index++;
		start++;
	}
	new_str[index] = '\0';
	return (new_str);
}


size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}

int	is_set(char c, char const *set)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (c == set[index])
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*output;

	i = 0;
	j = ft_strlen((char *)s1) - 1;
	while (s1[i] && is_set(s1[i], set))
		i++;
	while (s1[j] && j > i && is_set(s1[j], set))
		j--;
	output = ft_substr(s1, i, (j - i + 1));
	return (output);
}























int	word_counter(char	*s, char c)
{
	int	counter;
	int	index;

	counter = 0;
	index = 0;
	while (s[index])
	{
		while (s[index] && s[index] == c)
			index++;
		if (s[index] && s[index] != c)
			counter++
		while (s[index] && s[index] != c)
			index++;
	}
	return (counter);
}

size_t	word_length(char	const	*s, char c)
{
	int	index;

	index = 0;
	while (s[index] && s[index] != c)
		index++;
	return (index);
}

void	free_malloc(char **s, int size)
{
	int	index;

	index = 0;
	while (index <= size)
	{
		free(s[index]);
		index++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**cabinet;
	int		counter;
	int		index;
	size_t	len;

	index = 0;
	counter = 0;
	if (!s)
		return (NULL);
	cabinet = (char **)malloc((word_counter(s, c) + 1) * sizeof(char));
	if (!cabinet)
		return (0);
	while (s[index])
	{
		while (s[index] && s[index] == c)
			index++;
		if (s[index] && s[index] != c)
		{
			len = word_length(&s[index], c);
			cabinet[counter] = (char *)malloc((len + 1) * sizeof(char));
			if (!cabinet[counter])
			{
				free_malloc(cabinet, counter);
				return (0);
			}
			cabinet[counter] = ft_substr(s, index, len);
			index = (index + word_length(&s[index], c));
			counter++;
		}
	}
	cabinet[counter] = NULL;
	return (cabinet);
}

int	main(void)
{
	char	*teste;
	char	**print;
	char	*vazio;
	int		index;

	index = 0;
	vazio = NULL;
	printf("%s", "TESTE 1: \tNULL\tft_split(teste, ' ')\n");
	print = ft_split(vazio, ' ');
	if (print == NULL)
		printf("%s", "\nNULL\n\n");
	printf("%s", "\n--------------------------------------------------\nTESTE 2: \tpost tenebras lux\tft_split(teste, ' ')\n");
	teste = "post	tenebras	lux";
	print = ft_split(teste, ' ');
	while (print[index])
	{
		printf("%s\n", print[index]);
		index++;
	}
	printf("%s", "\n--------------------------------------------------\nTESTE 3: \tpost tenebras lux\tft_split(teste, ' ')\n");
	teste = "post tenebras lux";
	print = ft_split(teste, ' ');
	index = 0;
	while (print[index])
	{
		printf("%s\n", print[index]);
		index++;
	}
		printf("%s", "\n--------------------------------------------------\nTESTE 4: \tgaveta1 gaveta2		ainda	gaveta2 gaveta3\tft_split(teste, ' ')\n");
	teste = "gaveta1 gaveta2		ainda	gaveta2 gaveta3";
	print = ft_split(teste, ' ');
	index = 0;
	while (print[index])
	{
		printf("%s\n", print[index]);
		index++;
	}
	printf("%s", "\n--------------------------------------------------\nTESTE 5: \t   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   \tft_split(teste, ' ')\n");
	teste = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
	print = ft_split(teste, ' ');
	index = 0;
	while (print[index])
	{
		printf("%s\n", print[index]);
		index++;
	}
	return (0);
}
