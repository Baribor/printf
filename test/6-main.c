#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len, len2;
    int *ptr = NULL;
    int num = 42;

    /* Test case 1: Printing a NULL pointer */
    len = _printf("Pointer value: %p\n", (void *)ptr);
    len2 = printf("Pointer value: %p\n", (void *)ptr);
    printf("len: %d, len2: %d\n", len, len2);

    /* Test case 2: Printing a non-NULL pointer */
    ptr = &num;
    len = _printf("Pointer value: %p\n", (void *)ptr);
    len2 = printf("Pointer value: %p\n", (void *)ptr);
    printf("len: %d, len2: %d\n", len, len2);

    return 0;
}
