#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len, len2;
    int num = 998;
    unsigned int u_num = 12345;

    // Test case 1: + modifier with %d specifier
    len = _printf("Positive number with sign: [%+d]\n", num);
    len2 = printf("Positive number with sign: [%+d]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 2: + modifier with %u specifier
    len = _printf("Positive unsigned number with sign: [%+u]\n", u_num);
    len2 = printf("Positive unsigned number with sign: [%+u]\n", u_num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 3: space modifier with %d specifier
    len = _printf("Positive number with space: [% d]\n", num);
    len2 = printf("Positive number with space: [% d]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 4: space modifier with %u specifier
    len = _printf("Positive unsigned number with space: [% u]\n", u_num);
    len2 = printf("Positive unsigned number with space: [% u]\n", u_num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 5: # modifier with %x specifier
    len = _printf("Hexadecimal with prefix: [%#x]\n", num);
    len2 = printf("Hexadecimal with prefix: [%#x]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 6: # modifier with %X specifier
    len = _printf("Hexadecimal (uppercase) with prefix: [%#X]\n", num);
    len2 = printf("Hexadecimal (uppercase) with prefix: [%#X]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 7: # modifier with %o specifier
    len = _printf("Octal with prefix: [%#o]\n", num);
    len2 = printf("Octal with prefix: [%#o]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    return 0;
}
