/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:03:31 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/12 16:04:33 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_memmove (void *dest, const void *src, size_t num)
{
  int index;
  int limit;
  
  // First step: point to starting address
  index = 0;
  limit = num;
  
  // Second: set each byte in the block until the specified value
    while (index <= limit)
    {
      src[index] == dest[index];
      index++;
    }
  return(0);
}
