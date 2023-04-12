/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:04:05 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/12 16:04:18 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_toupper (char lowercase)
{
  char uppercase;

  uppercase = (lowercase - 32);
    if  (lowercase >= 97 && lowercase <= 122)
      return(uppercase);
}
