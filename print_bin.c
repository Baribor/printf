#include "main.h"

/**
 * print_bin - Prints an unsigned integer in binary
 * @num: Integer to convert
 * @counter: Pointer to character counter
 * Return: Void always.
 */
void print_bin(int *counter, unsigned int num)
{
	unsigned int d, r;

	if (num <= 1)
	{
		*counter += _putchar(num + '0');
		return;
	}

	d = num / 2;
	r = num % 2;
	print_bin(counter, d);
	*counter += _putchar(r + '0');
}
