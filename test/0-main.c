#include <stdio.h>
#include "../main.h"

/**
 * main - The main entry
 * Return: 0 always.
 */
int main(void)
{
    int len, len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("len: %d,  len2: %d\n", len, len2);

    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    printf("len: %d,  len2: %d\n", len, len2);

    len = _printf("Character:[%c]\n", 'H');
    len2 = printf("Character:[%c]\n", 'H');
    printf("len: %d,  len2: %d\n", len, len2);

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("len: %d,  len2: %d\n", len, len2);

    return (0);
}
