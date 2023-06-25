#include <stdio.h>
#include "../main.h"

/**
 * main - The main entry
 * Return: 0 always.
 */
int main(void)
{
    int len, len2;

    len = _printf("Rot13: %R\n", "Hello ALX! Yeah");
    len2 = printf("Rot13: Uryyb NYK! Lrnu\n");
    printf("len: %d,  len2: %d\n", len, len2);

    return (0);
}
