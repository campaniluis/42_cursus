/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:54 by lclaudio			       #+#    #+#             */
/*   Updated: 2023/05/27 19:05:50 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"






// void	error_handling(char const *s, char c)
// {
// 		if (!s)
// 		return (NULL);
// }














size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	index;

	index = 0;
	if (dstsize < 1)
		return (ft_strlen((char *)src));
	while (index < (dstsize - 1) && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (ft_strlen((char *)src));
}


size_t	ft_strlen(char *str)
{
	size_t	index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}


char	*ft_strchr(const char *str, int to_find)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == (char)to_find)
			return ((char *)&str[index]);
		index++;
	}
	if (to_find == '\0')
		return ((char *)&str[index]);
	return (NULL);
}























int	word_counter(char	const	*s, char c)
{
	int	counter;
	int	index;

	counter = 0;
	index = 0;
	while (s[index])
	{
		if (ft_strchr(&s[index], c))
			counter++;
		index++;
	}
	return (counter);
}

size_t	word_length(char	const	*s, char c)
{
	int	index;

	index = 0;
	while (s[index] != 0 && !ft_strchr(&s[index], c))
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

	printf("%s", "\nI'M INSIDE THE SPLIT\n");
	index = 0;
	counter = 0;
	if (!s)
	{
		printf("%s", "\nI'M INSIDE THE if (!s)\n");
		return (NULL);
	}
	if (!ft_strchr(s, c))
	{
		printf("%s", "\nI'M AT THE if (!ft_strchr(s, c))\n");
		return ((char **)s);
	}
	cabinet = (char **)malloc((word_counter(s, c) + 1) * sizeof(char));
	if (!cabinet)
		return (0);
	while (s[index])
	{
		printf("%s", "\nI'M GETTING IN THIS WHILE\n");
		len = word_length(&s[index], c);
		cabinet[counter] = (char *)malloc((len + 1) * sizeof(char));
		if (!cabinet[counter])
		{
			free_malloc(cabinet, counter);
			return (0);
		}
		ft_strlcpy(cabinet[counter], s, word_length(&s[index], (char)c));
		index = (index + word_length(&s[index], c));
		counter++;
		index++;
	}
	printf("%s", "\nI'M GETTING OUT OF THIS WHILE\n");
	return (cabinet);
}


// int		main(void)
// {
// 	char	*teste;
// 	char	**print;
// 	char	*vazio;
// 	int		index;

// 	teste = "post	tenebrvs	lux";
// 	index = 0;
// 	vazio = NULL;
// 	printf("%s", "TESTE 1: \tNULL\tft_split(teste, ' ')\n");
// 	print = "I'M FULL";
// 	if (print[index] == "I'M FULL")
// 		printf("%s", "I'M FULL");
// 	print = ft_split(vazio, ' ');
// 	printf("%s", "\nOUT OF THE SPLIT\n\n");
// 	if (print == NULL)
// 		printf("%s", "\nNULL\n");
// 	printf("%s", "TESTE 2: \tpost	tenebrvs	lux\tft_split(teste, ' ')\n");
// 	print = ft_split(teste, ' ');
// 		while (index)
// 	{
// 		printf("%s", print[index]);
// 		index++;
// 	}
// 	teste = "post tenebrvs lux";
// 	printf("%s", "TESTE 3: \tpost tenebrvs lux\tft_split(teste, ' ')\n");
// 	print = ft_split(teste, ' ');
// 	while (index)
// 	{
// 		printf("%s", print[index]);
// 		printf("%s", "\nHERE!!!!!!!!\n\n");
// 		index++;
// 	}
// }

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
	printf("%s", "\nOUT OF THE SPLIT\n");
	if (print == NULL)
		printf("%s", "\nNULL\n\n");
	printf("%s", "\n--------------------------------------------------\nTESTE 2: \tpost tenebrvs lux\tft_split(teste, ' ')\n");
	teste = "post	tenebrvs	lux";
	print = ft_split(teste, ' ');
	printf("%s", "\nTEST 2 IS SPLITTED\n");
	if (print == NULL)
		printf("%s", "\nI'M STILL NULL\n\n");
	else
		printf("%s", "\nTEST 2 CHANGED SOMETHING\n\n");
	if (print[index] == teste)
		printf("%s", "\nTEST 2 WORKED\n\n");
	else
		{
			printf("%s", "TEST 2 DIDN'T WORK AT ALL");
			return (0);
		}
	printf("%s", "\nTEST 2 WORKED\n\n");
	printf("%s", "\n--------------------------------------------------\nTESTE 3: \tpost tenebrvs lux\tft_split(teste, ' ')\n");
	teste = "post tenebrvs lux";
	print = ft_split(teste, ' ');
	index = 0;
	while (print[index])
	{
		printf("%s\n", print[index]);
		index++;
	}
	return (0);
}