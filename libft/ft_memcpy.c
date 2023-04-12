/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:03:26 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/12 16:06:08 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_memcpy (void *dest, const void *src, size_t num)
{
  int index;
  int limit; 
  
  // First step: point to starting address
  index = 0;
  limit = num;
  
  // Second: set each byte in the block until the specified value
    while (value != '\0' && index <= limit)
    {
      src[index] == dest[index];
      index++;
    }
  return(0);
}
