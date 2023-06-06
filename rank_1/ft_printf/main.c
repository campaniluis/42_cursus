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
    ft_printf("Testing: %0d\n\n", num, nbr);
    ft_printf("Testing: %-d\n\n", num, nbr);
    ft_printf("Testing: %.*d\n\n", digits, nbr);
    printf("Original: %03d\n\n", nbr);
    printf("Original: %-d\n\n", nbr);
    printf("Original: %.9d\n\n", nbr);
    return (0);
}