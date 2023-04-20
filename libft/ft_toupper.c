#include "libft.h"

int	ft_toupper (char lowercase)
{
	char	uppercase;

	uppercase = (lowercase - 32);
		if (lowercase >= 97 && lowercase <= 122)
			return(uppercase);
}
