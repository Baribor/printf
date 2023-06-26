#include <stdio.h>
#include "../main.h"

/**
 * main - The main entry
 * Return: 0 always.
 */
int main(void)
{
    int len, len2;
    char ch1 = '\0';    /* Null character */
    char ch2 = '\n';    /*  Newline character */
    char ch3 = '\t';    /*  Tab character */
    char str1[] = "";   /* Empty string */
    char str2[] = "\n"; /* String with only newline character */
    char *s;

    s = NULL;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("len: %d,  len2: %d\n", len, len2);

    len = _printf("String:[%s]\n", s);
    len2 = printf("String:[%s]\n", s);
    printf("len: %d,  len2: %d\n", len, len2);

    len = _printf("Character:[%c]\n");
    len2 = printf("Character:[%c]\n");
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
