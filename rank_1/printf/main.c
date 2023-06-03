#include "libftprintf.h"

int main(void)
{
    int index;

    index = ft_printf("Hello World!\n");
    printf("ft_printf returned: %d\n", index);
    return (0);
}