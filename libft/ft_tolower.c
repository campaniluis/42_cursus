/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclaudio <lclaudio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:04:01 by lclaudio          #+#    #+#             */
/*   Updated: 2023/04/12 16:04:24 by lclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_tolower (char uppercase)
{
  char lowercase;

  lowercase = (uppercase - 32);
    if  (uppercase >= 65 && uppercase <= 90)
      return(lowercase);
}
