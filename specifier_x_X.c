#include <stdarg.h>
#include "main.h"

/**
 * specifier_x - Function to handle the x specifier
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_x(va_list args, specifier_info info)
{
	int counter = 0;
	unsigned long int v;

	if (info.length && info.length == 'l')
		v = va_arg(args, unsigned long int);
	else
		v = va_arg(args, unsigned int);

	if (info.alt && v > 0)
		counter += _puts("0x");

	print_hex(v, 1, &counter);
	return (counter);
}

/**
 * specifier_X - Function to handle the X specifier
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_X(va_list args, specifier_info info)
{
	int counter = 0;
	unsigned long int v;

	if (info.length && info.length == 'l')
		v = va_arg(args, unsigned long int);
	else
		v = va_arg(args, unsigned int);

	if (info.alt && v > 0)
		counter += _puts("0X");
	print_hex(v, 0, &counter);
	return (counter);
}
