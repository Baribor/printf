#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len, len2;
    int num = 42;
    unsigned int u_num = 12345;

    len = _printf("Field width: [%*d]\n", 12, -1 * num);
    len2 = printf("Field width: [%*d]\n", 12, -1 * num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Field width: [%#*x]\n", 18, num);
    len2 = printf("Field width: [%#*x]\n", 18, num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Field width: [%#6X]\n", num);
    len2 = printf("Field width: [%#6X]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Field width: [%5u]\n", u_num);
    len2 = printf("Field width: [%5u]\n", u_num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Field width: [%4o]\n", num);
    len2 = printf("Field width: [%4o]\n", num);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Field width: [%4c]\n", 'D');
    len2 = printf("Field width: [%4c]\n", 'D');
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Field width: [%13s]\n", "Hello");
    len2 = printf("Field width: [%13s]\n", "Hello");
    printf("len: %d, len2: %d\n", len, len2);

    return 0;
}
