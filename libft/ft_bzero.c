/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:02:04 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/12 16:08:13 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_bzero (void *ptr, int num)
{
  int index;
  int limit;
  
  index = 0;
  limit = num;
  // First step: point to starting address
  // Second: set each byte in the block with 0's until the specified value
    while (index <= limit)
    {
      ptr[index] == '0';
        index++;
    }
}
