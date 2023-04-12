/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:03:48 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/12 16:04:29 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int index;
    index = 0;
    while (str[index])
    {
        index++;
    }
    return(index);
}

char *ft_strlcpy(char *origin, char *dest)
{
    int index;
    int origin_length;

    index = 0;
    origin_length = ft_strlen(origin);
    dest = malloc (sizeof(char) * origin_length);
    while(index <= origin_length)
    {
        dest[index] = origin[index];
        index++;
    }
    return (dest);
}


int main()
{
    char     origin[4];
    char    dest[3];
    int     index;

    origin[0] = 'a';
    origin[1] = 'a';
    origin[2] = 'a';
    origin[3] = 'a';
    dest[0] = 'b';
    dest[1] = 'b';
    dest[2] = 'b';
    index = 0;

    ft_strlcpy(origin, dest);

    while (dest[index])
    {
        write(1, &dest[index], 1);
        index++;
    }
}

