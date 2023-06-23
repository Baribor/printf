#include "main.h"

/**
 * _puts - Prints a string of characters.
 * @s: The string to print
 * Return: The number of characters printed.
 */
int _puts(char *s)
{
	int i = 0;

	while (s[i])
		_putchar(s[i++]);

	return (i);
}
