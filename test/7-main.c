#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len, len2;
    int num = -67;
    unsigned int u_num = 12345;

    len = _printf("Positive number with sign: [%+d]\n", num);
    len2 = printf("Positive number with sign: [%+d]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Positive unsigned number with sign: [%+u]\n", u_num);
    len2 = printf("Positive unsigned number with sign: [%+u]\n", u_num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Positive number with space: [% d]\n", num);
    len2 = printf("Positive number with space: [% d]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Positive unsigned number with space: [% u]\n", u_num);
    len2 = printf("Positive unsigned number with space: [% u]\n", u_num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Hexadecimal with prefix: [%#x]\n", num);
    len2 = printf("Hexadecimal with prefix: [%#x]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Hexadecimal (uppercase) with prefix: [%#X]\n", num);
    len2 = printf("Hexadecimal (uppercase) with prefix: [%#X]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Octal with prefix: [%#o]\n", num);
    len2 = printf("Octal with prefix: [%#o]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    return 0;
}
