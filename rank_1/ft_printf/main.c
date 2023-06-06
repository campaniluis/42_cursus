#include "libftprintf.h"

int main(void)
{
    // int num;
    int nbr;
    // float   f;
    int neg_nbr;

    // num = 13;
    nbr = 42;
    // f = 42.23244;
    neg_nbr = -42;
    ft_printf("T1: % d\n\n", nbr);
    printf("V1: % d\n\n", nbr);
     ft_printf("T2: % d\n\n", neg_nbr);
    printf("V2: % d\n\n", neg_nbr);


    return (0);
}