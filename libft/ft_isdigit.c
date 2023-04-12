/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:02:56 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/12 16:07:34 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_isdigit(char *str)
{
    int index;

    index = 0;
    while(str[index])
    {
        if(str[index] < '0' || '9' < str[index])
            return (1);
        index++;
    }
    return (0);
}