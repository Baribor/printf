#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len, len2;
    int num = 42;
    unsigned int u_num = 12345;

    // Test case 1: Precision for %d specifier
    len = _printf("Precision: [%.4d]\n", num);
    len2 = printf("Precision: [%.4d]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 2: Precision for %x specifier
    len = _printf("Precision: [%.6x]\n", num);
    len2 = printf("Precision: [%.6x]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 3: Precision for %X specifier
    len = _printf("Precision: [%.3X]\n", num);
    len2 = printf("Precision: [%.3X]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 4: Precision for %u specifier
    len = _printf("Precision: [%.5u]\n", u_num);
    len2 = printf("Precision: [%.5u]\n", u_num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 5: Precision for %o specifier
    len = _printf("Precision: [%.4o]\n", num);
    len2 = printf("Precision: [%.4o]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    return 0;
}
