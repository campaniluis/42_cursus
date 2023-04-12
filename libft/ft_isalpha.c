/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:05:04 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/12 16:06:50 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_isalpha(char *str)
{
    int index;

    index = 0;
    while(str[index])
    {
        if((str[index] < 'a' || 'z' < str[index]) ||
            (str[index] < 'A' || 'Z' < str[index]))
            return (1);
        index++;
    }
    return (0);
}