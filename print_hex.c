#include "main.h"

/**
 * print_hex - Prints an unsigned integer in Hex
 * @num: Integer to convert
 * @lower: Specifies to use lowercase or uppercase
 * Return: Void always.
 */
void print_hex(unsigned long int num, int lower)
{
	unsigned long int d, r;

	if (num <= 9)
	{
		_putchar(num + '0');
		return;
	}

	if (num <= 15)
	{
		_putchar((num - 10) + (lower ? 'a' : 'A'));
		return;
	}

	d = num / 16;
	r = num % 16;
	print_hex(d, lower);

	if (r <= 9)
		_putchar(r + '0');
	else
		_putchar((r - 10) + (lower ? 'a' : 'A'));
}
