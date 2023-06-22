#include "ft_printf.h"
#include <limits.h>

int main(void)
{
    ft_printf("T1:  %p, %p ", LONG_MIN, LONG_MAX);
    printf("\nV1:  %p, %p \n", LONG_MIN, LONG_MAX);
    ft_printf("\nT2:  %p, %p ", ULONG_MAX, -ULONG_MAX);
    printf("\nV2:  %p, %p ", ULONG_MAX, -ULONG_MAX);
    return (0);
}
