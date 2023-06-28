#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len, len2;
    int num = 42;
    unsigned int u_num = 12345;

    len = _printf("Precision: [%.4d]\n", num);
    len2 = printf("Precision: [%.4d]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Precision: [%.4d]\n", -42);
    len2 = printf("Precision: [%.4d]\n", -42);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Precision: [%.6x]\n", num);
    len2 = printf("Precision: [%.6x]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Precision: [%.3X]\n", num);
    len2 = printf("Precision: [%.3X]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Precision: [%.5u]\n", u_num);
    len2 = printf("Precision: [%.5u]\n", u_num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Precision: [%.o]\n", num);
    len2 = printf("Precision: [%.o]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Precision: [%8.1s]\n", "Hello");
    len2 = printf("Precision: [%8.1s]\n", "Hello");
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Precision: [%8.c]\n", 'K');
    len2 = printf("Precision: [%8.c]\n", 'K');
    printf("len: %d, len2: %d\n", len, len2);

    return 0;
}
