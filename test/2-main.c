#include <stdio.h>
#include "../main.h"

/**
 * main - The main entry
 * Return: 0 always.
 */
int main(void)
{
    int len, len2;

    len = _printf("Binary [%b]\n", 98);
    len2 = printf("Binary [1100010]\n");
    printf("len: %d,  len2: %d\n", len, len2);

    return (0);
}
