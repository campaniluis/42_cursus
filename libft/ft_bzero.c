/* ************************************************************************** */
/*																																						*/
/*																												:::	 ::::::::	 */
/*	 ft_bzero.c						 :+:		 :+:	 :+:	 */
/*																										+:+ +:+	 +:+		*/
/*	 By: lclaudio <lclaudio@student.42.fr>					+#+ +:+			 +#+				*/
/*																								+#+#+#+#+#+	+#+		*/
/*	 Created: 2023/04/21 08:08:57 by lclaudio		#+#	#+#				 */
/*	 Updated: 2023/04/21 08:13:15 by lclaudio	 ###	 ########.fr			*/
/*																																						*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_bzero(void *ptr, int num)
{
	int	index;
	int	limit;

	index = 0;
	limit = num;
	while (index <= limit)
	{
		ptr[index] == '0';
			index++;
	}
}
