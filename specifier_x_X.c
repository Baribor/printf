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

	(void)info;
	print_hex(va_arg(args, unsigned int), 1, &counter);
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

	(void)info;
	print_hex(va_arg(args, unsigned int), 0, &counter);
	return (counter);
}
