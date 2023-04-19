#include "libft.h"

void  ft_memset (void *ptr, void value, size_t num)
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
