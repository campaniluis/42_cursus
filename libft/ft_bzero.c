#include "libft.h"

char *ft_bzero (void *ptr, int num)
{
  int index;
  int limit;
  
  index = 0;
  limit = num;
  // First step: point to starting address
  // Second: set each byte in the block with 0's until the specified value
    while (index <= limit)
    {
      ptr[index] == '0';
        index++;
    }
}
