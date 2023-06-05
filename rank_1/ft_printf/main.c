#include "libftprintf.h"

int main(void)
{
    int num;
    int nbr;
    int digits;

    num = 13;
    nbr = 42;
    digits = 1;
    ft_printf("Testing: %-d\n\n", num, nbr);
    ft_printf("Testing: %0d\n\n", num, nbr);
    ft_printf("Testing: %.*d\n\n", digits, nbr);
    return (0);
}