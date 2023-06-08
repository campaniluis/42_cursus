#include "libftprintf.h"

int main(void)
{
    int nbr;

    nbr = 42;
    ft_printf("T1*: %0*d\n\n", 10, nbr);
    printf("V1*: %0*d\n\n", 10, nbr);
    ft_printf("T2n: %010d\n\n", nbr);
    printf("V2n: %010d\n\n", nbr);
    return (0);
}