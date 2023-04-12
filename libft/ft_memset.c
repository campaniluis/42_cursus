/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:03:36 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/12 16:04:32 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_memset (void *ptr, void value, size_t num)
{
  int index;
  int limit; 
  
  // First step: point to starting address
  index = 0;
  limit = num;
  
  // Second: set each byte in the block until the specified value
    while (value != '\0' && index <= limit)
    {
      value[index] == ptr[index];
      index++;
    }
  return(0);
}
