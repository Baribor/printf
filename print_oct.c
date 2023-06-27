#include "main.h"

/**
 * print_oct - Prints an unsigned integer in oct recursively.
 * @num: Integer to convert
 * @c: Pointer to character counter
 * Return: Void always.
 */
void print_oct(unsigned long int num, int *c)
{
	unsigned long int d, r;

	if (num <= 7)
	{
		*c += _putchar(num + '0');
		return;
	}

	d = num / 8;
	r = num % 8;
	print_oct(d, c);
	*c += _putchar(r + '0');
}
