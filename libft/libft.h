/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:08:22 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/23 10:06:35 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIBFT_H
# define	LIBFT_H

#include <stdlib.h>
#include <stdio.h>

// Struct and typedef definitions
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;


int		ft_atoi (char *str);
void	ft_bzero(void *ptr, size_t limit)
// char	*ft_calloc (int num, sizeof(size));
int	ft_isalnum(char *str); // here changed, maybe still has to change
int	ft_isalpha(char *str); // here changed, maybe still has to change
int	ft_isascii(char *str); // here changed, maybe still has to change
int	ft_isdigit(char *str); // here changed, maybe still has to change
int	ft_isprint(char *str); // here changed a lot, maybe still has to change
char	*ft_itoa(int n);
void	ft_memchr (void *ptr, int value, int num);
int		ft_memcmp (char *ptr1,char *ptr2, int num);
void	ft_memcpy (void *dest, const void *src, size_t num);
void	ft_memmove (void *dest, const void *src, size_t num);
// void	ft_memset (void *ptr, void value, size_t num);
char	**ft_split(char const *s, char c);
char	*ft_strchr (const char *str, int to_find); // here changed
char	*ft_strdup (char *str);
char	*ft_strjoin(char *s1, char *s2); // here changed
size_t	strlcat (char *src, char *dest, int buffer); // here changed
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); // here changed a lot
int		ft_strlen(char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// int		ft_strncmp (char *str1, *char str2, int num);
char	ft_strnstr (const char *haystack, const char *needle, size_t num); // here changed
char	*ft_strrchr (const char *str, int to_find); // here changed
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower (int uppercase); // here changed
int		ft_toupper (int lowercase); // here changed


// Constant definitions

// Struct and typedef definitions

#endif
