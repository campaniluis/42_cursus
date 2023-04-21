/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    libft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 08:08:22 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/21 08:30:12 by lclaudio         ###   ########.fr       */
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
char	*ft_bzero (void *ptr, int num);
char	*ft_calloc (int num, sizeof(size));
void	ft_isalnum(char *str);
void	ft_isalpha(char *str);
void	ft_isascii(char *str);
void	ft_isdigit(char *str);
void	ft_isprint(char *str);
char	*ft_itoa(int n);
void	ft_memchr (void *ptr, int value, int num);
int		ft_memcmp (char *ptr1,char *ptr2, int num);
void	ft_memcpy (void *dest, const void *src, size_t num);
void	ft_memmove (void *dest, const void *src, size_t num);
void	ft_memset (void *ptr, void value, size_t num);
char	**ft_split(char const *s, char c);
void	ft_strchr (char *str, char to_find);
char	*ft_strdup (char *str);
void	ft_strjoin(char *s1, char *s2);
void	strlcat (char *src, char *dest, int buffer);
char	*ft_strlcpy(char *origin, char *dest);
int		ft_strlen(char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp (char *str1, *char str2, int num);
char	*ft_strnstr (char *haystack, char *needle, int num);
char	*ft_strrchr (char *str, char to_find);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower (char uppercase);
int		ft_toupper (char lowercase);


// Constant definitions

// Struct and typedef definitions

#endif