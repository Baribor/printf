#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len, len2;
    short int s_num = 32767;
    long int l_num = 2147483647;
    unsigned short int us_num = 0xffff;
    unsigned long int ul_num = 0xfffffffff;

    len = _printf("Long decimal: [%ld] yeah %s\n", l_num, "Says");
    len2 = printf("Long decimal: [%ld] yeah %s\n", l_num, "Says");
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Short decimal: [%hd]\n", s_num);
    len2 = printf("Short decimal: [%hd]\n", s_num);
    printf("len: %d, len2: %d\n", len, len2);

    len = printf("Long hexadecimal: [%rX]\n", ul_num);
    len2 = _printf("Long hexadecimal: [%mx]\n", ul_num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Long hexadecimal (uppercase): [%lX]\n", ul_num);
    len2 = printf("Long hexadecimal (uppercase): [%lX]\n", ul_num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Long unsigned decimal: [%lu]\n", ul_num);
    len2 = printf("Long unsigned decimal: [%lu]\n", ul_num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Short unsigned decimal: [%hu]\n", us_num);
    len2 = printf("Short unsigned decimal: [%hu]\n", us_num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Long octal: [%lo]\n", ul_num);
    len2 = printf("Long octal: [%lo]\n", ul_num);
    printf("len: %d, len2: %d\n", len, len2);

    return 0;
}
