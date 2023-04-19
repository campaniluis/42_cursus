#include "libft.h"

void  ft_memmove (void *dest, const void *src, size_t num)
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
