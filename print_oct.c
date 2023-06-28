#include "main.h"

/**
 * print_oct - Prints an unsigned integer in oct recursively.
 * @num: Integer to convert
 * Return: Void always.
 */
void print_oct(unsigned long int num)
{
	unsigned long int d, r;

	if (num <= 7)
	{
		_putchar(num + '0');
		return;
	}

	d = num / 8;
	r = num % 8;
	print_oct(d);
	_putchar(r + '0');
}
