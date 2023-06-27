#include <stdio.h>
#include "../main.h"

/**
 * main - The main entry
 * Return: 0 always.
 */
int main(void)
{
    int len, len2;
    char ch1 = '\0';
    char ch2 = '\n';
    char ch3 = '\t';
    char str1[] = "\0";
    char str2[] = "\n";
    char s = 'S';

    len = _printf("Let's try %c to printf a % simple %s.\n", 'G', "NUL");
    len2 = printf("Let's try %c to printf a % simple %s.\n", 'G', "dsd", NULL);
    printf("len: %d,  len2: %d\n", len, len2);

    len = _printf("Character:[%c]\n", s);
    len2 = printf("Character:[%c]\n", s);
    printf("len: %d,  len2: %d\n", len, len2);

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("len: %d,  len2: %d\n", len, len2);

    len = _printf("Null character: [%c]\n", ch1);
    len2 = printf("Null character: [%c]\n", ch1);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Newline character: [%c]\n", ch2);
    len2 = printf("Newline character: [%c]\n", ch2);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Tab character: [%c]\n", ch3);
    len2 = printf("Tab character: [%c]\n", ch3);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Empty string: [%s]\n", str1);
    len2 = printf("Empty string: [%s]\n", str1);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("String with newline: [%s]\n", str2);
    len2 = printf("String with newline: [%s]\n", str2);
    printf("len: %d, len2: %d\n", len, len2);

    len = _printf("Multiple percentages: [%%%%]\n");
    len2 = printf("Multiple percentages: [%%%%]\n");
    printf("len: %d, len2: %d\n", len, len2);
    return (0);
}
