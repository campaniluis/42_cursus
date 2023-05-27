/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:09:54 by lclaudio			       #+#    #+#             */
/*   Updated: 2023/05/27 16:57:06 by lclaudio         ###   ########.fr       */
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

	index = 0;
	counter = 0;
	// error_handling(*s, c);
	if (!s)
		return (NULL);
	cabinet = (char **)malloc((word_counter(s, c) + 1) * sizeof(char));
	if (!cabinet)
		return (0);
	while (s[index])
	{
		len = word_length(&s[index], c);
		cabinet[counter] = (char *)malloc((len + 1)	* sizeof(char));
		if (!cabinet[counter])
		{
			free_malloc(cabinet, counter);
			return (0);
		}
		ft_strlcpy(cabinet[counter], s, word_length(&s[index], (char)c));
		index = (index + word_length(&s[index], c));
		counter++;
	}
	cabinet[counter] = '\0';
	return (cabinet);
}


int		main(void)
{
	char	*teste_1;
	char	**print;
	int		index;

	teste_1 = "post	tenebrvs	lux";
	printf("%s", "ft_split(teste_1, ' ')\n");
	print = ft_split(teste_1, ' ');
	while (index)
	{
		printf("%s", print[index]);
		index++;
	}
}
