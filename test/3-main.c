#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len, len2;
    unsigned int num = 998;
    unsigned int max_unsigned = -1;
    unsigned int zero = 0;

    len = _printf("Hexadecimal: [%x]\n", num);
    len2 = printf("Hexadecimal: [%x]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Hexadecimal (uppercase): [%X]\n", num);
    len2 = printf("Hexadecimal (uppercase): [%X]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Unsigned decimal: [%u]\n", num);
    len2 = printf("Unsigned decimal: [%u]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Maximum unsigned decimal: [%u]\n", max_unsigned);
    len2 = printf("Maximum unsigned decimal: [%u]\n", max_unsigned);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Octal: [%o]\n", num);
    len2 = printf("Octal: [%o]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Zero (octal): [%o]\n", zero);
    len2 = printf("Zero (octal): [%o]\n", zero);
    printf("len: %d, len2: %d\n", len, len2);

    return 0;
}
