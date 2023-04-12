/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:02:31 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/12 16:07:53 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_isalnum(char *str)
{
    int index;

    index = 0;
    while(str[index])
    {
        if((str[index] < '0' || '9' < str[index]) ||
            (str[index] < 'a' || 'z' < str[index]) || 
                (str[index] < 'A' || 'Z' < str[index]))
            return (1);
        index++;
    }
    return (0);
}