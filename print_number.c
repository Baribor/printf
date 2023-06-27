#include <limits.h>
#include "main.h"

/**
 * print_number - print an integer digit by digit.
 *
 * @n: integer to print
 * Return: void
 */
int print_number(long int n)
{
	int digit, count = 0, temp, i;
	int isMin = (n == INT_MIN);
	int char_count = 0;

	if (isMin)
		n += 1;

	if (n < 0)
	{
		char_count += _putchar('-');
		n *= -1;
	}
	if (n == 0)
	{
		char_count += _putchar(n + '0');
		return (char_count);
	}

	temp = n;
	while (temp > 0)
	{
		count++;
		temp = temp / 10;
	}

	while (count > 0)
	{
		if (isMin && count == 1)
			break;

		temp = n;
		for (i = 1; i < count; i++)
			temp = temp / 10;
		digit = temp % 10;
		count--;
		char_count += _putchar(digit + '0');
	}
	if (isMin)
		char_count += _putchar(8 + '0');
	return (char_count);
}

/**
 * print_number_unsign - print an unsigned integer.
 *
 * @n: integer to print
 * Return: void
 */
int print_number_unsign(unsigned long int n)
{
	int count = 0, i;
	unsigned long int digit, temp;
	int char_count = 0;

	if (n == 0)
	{
		char_count += _putchar(n + '0');
		return (char_count);
	}

	temp = n;
	while (temp > 0)
	{
		count++;
		temp = temp / 10;
	}

	while (count > 0)
	{
		temp = n;
		for (i = 1; i < count; i++)
		{
			temp = temp / 10;
		}
		digit = temp % 10;
		count--;
		char_count += _putchar(digit + '0');
	}
	return (char_count);
}
