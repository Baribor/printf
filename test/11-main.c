#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len, len2;
    int num = 42;
    unsigned int u_num = 12345;

    // Test case 1: 0 flag for %d specifier
    len = _printf("Zero flag: [%010d]\n", num);
    len2 = printf("Zero flag: [%010d]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 2: 0 flag for %x specifier
    len = _printf("Zero flag: [%08x]\n", num);
    len2 = printf("Zero flag: [%08x]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 3: 0 flag for %X specifier
    len = _printf("Zero flag: [%06X]\n", num);
    len2 = printf("Zero flag: [%06X]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 4: 0 flag for %u specifier
    len = _printf("Zero flag: [%05u]\n", u_num);
    len2 = printf("Zero flag: [%05u]\n", u_num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 5: 0 flag for %o specifier
    len = _printf("Zero flag: [%04o]\n", num);
    len2 = printf("Zero flag: [%04o]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    return 0;
}
