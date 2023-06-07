#include "libftprintf.h"

int main(void)
{
    // int num;
    int nbr;
    // float   f;
    // int neg_nbr;

    // num = 13;
    nbr = 42;
    // f = 42.23244;
    // neg_nbr ``= -42;
    ft_printf("T1*: %0*d\n\n", 10, nbr);
    // ft_printf("\n----------\n");
    printf("V1*: %0*d\n\n", 10, nbr);
    // ft_printf("----------------\n\n");
    ft_printf("T2n: %010d\n\n", nbr);
    // ft_printf("\n----------\n");
    printf("V2n: %010d\n\n", nbr);


    return (0);
}