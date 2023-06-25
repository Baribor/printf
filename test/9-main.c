#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len, len2;
    int num = 42;
    unsigned int u_num = 12345;

    // Test case 1: Field width for %d specifier
    len = _printf("Field width: [%10d]\n", num);
    len2 = printf("Field width: [%10d]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 2: Field width for %x specifier
    len = _printf("Field width: [%8x]\n", num);
    len2 = printf("Field width: [%8x]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 3: Field width for %X specifier
    len = _printf("Field width: [%6X]\n", num);
    len2 = printf("Field width: [%6X]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 4: Field width for %u specifier
    len = _printf("Field width: [%5u]\n", u_num);
    len2 = printf("Field width: [%5u]\n", u_num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 5: Field width for %o specifier
    len = _printf("Field width: [%4o]\n", num);
    len2 = printf("Field width: [%4o]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    return 0;
}
