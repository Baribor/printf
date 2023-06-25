#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len, len2;
    long int num = 998;
    long long int ll_num = 1234567890123456LL;
    unsigned long long int max_ull = -1;

    // Test case 1: %ld specifier
    len = _printf("Long decimal: [%ld]\n", num);
    len2 = printf("Long decimal: [%ld]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 2: %lld specifier
    len = _printf("Long long decimal: [%lld]\n", ll_num);
    len2 = printf("Long long decimal: [%lld]\n", ll_num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 3: %lx specifier
    len = _printf("Long hexadecimal: [%lx]\n", num);
    len2 = printf("Long hexadecimal: [%lx]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 4: %lX specifier
    len = _printf("Long hexadecimal (uppercase): [%lX]\n", num);
    len2 = printf("Long hexadecimal (uppercase): [%lX]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 5: %lu specifier
    len = _printf("Long unsigned decimal: [%lu]\n", num);
    len2 = printf("Long unsigned decimal: [%lu]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 6: %lo specifier
    len = _printf("Long octal: [%lo]\n", num);
    len2 = printf("Long octal: [%lo]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    // Test case 7: %llu specifier with the maximum unsigned long long value
    len = _printf("Maximum unsigned long long decimal: [%llu]\n", max_ull);
    len2 = printf("Maximum unsigned long long decimal: [%llu]\n", max_ull);
    printf("len: %d, len2: %d\n", len, len2);

    return 0;
}
