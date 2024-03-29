#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len, len2;
    int num = 42;
    unsigned int u_num = 12345;

    // Test case 1: - flag for %d specifier
    len = _printf("Minus flag: [%-10d]\n", num);
    len2 = printf("Minus flag: [%-10d]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 2: - flag for %x specifier
    len = _printf("Minus flag: [%-8x]\n", num);
    len2 = printf("Minus flag: [%-8x]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 3: - flag for %X specifier
    len = _printf("Minus flag: [%-6X]\n", num);
    len2 = printf("Minus flag: [%-6X]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 4: - flag for %u specifier
    len = _printf("Minus flag: [%-5u]\n", u_num);
    len2 = printf("Minus flag: [%-5u]\n", u_num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 5: - flag for %o specifier
    len = _printf("Minus flag: [%-4o]\n", num);
    len2 = printf("Minus flag: [%-4o]\n", num);
    printf("len: %d, len2: %d\n", len, len2);
    return 0;
}
