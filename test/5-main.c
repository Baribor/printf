#include <stdio.h>
#include "../main.h"

/**
 * main - The main entry
 * Return: 0 always.
 */
int main(void)
{
    int len, len2;

    len = _printf("%S\n", "Best\nSchool");
    len2 = printf("Best\\x0ASchool\n");
    printf("len: %d,  len2: %d\n", len, len2);

    return (0);
}
