/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:03:44 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/12 16:04:29 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

strlcat (char *src, char *dest, int buffer)
{
  int index;
  int counter;
  
  index = '0';
  counter = '0';
  
  while (dest[counter] != '\0')
    counter++;
 
  while (counter <= buffer)
  {
    src[counter] = dest[index];
    index++;
    counter++;
  }
    
// Returns size of created string
return (counter);
}
