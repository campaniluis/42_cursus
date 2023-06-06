#include "libftprintf.h"

int main(void)
{
    int num;
    int nbr;
    // float   f;
    int digits;

    num = 13;
    nbr = 42;
    // f = 42.23244;
    digits = 1;
    ft_printf("Testing: %0*d\n\n", num, nbr);
    ft_printf("Testing: %-d\n\n", num, nbr);
    ft_printf("Testing: %.*d\n\n", digits, nbr);
    printf("Original: %013d\n\n", nbr);
    printf("Original: %-d\n\n", nbr);
    printf("Original: %.9d\n\n", nbr);
   printf("Original: %.*d\n\n", 9, nbr);
   printf("Original: %0*d\n\n", 13, nbr);

    return (0);
}