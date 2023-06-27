#include <stdarg.h>
#include "main.h"

/**
 * specifier_o - Function to handle the c specifier
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_o(va_list args, specifier_info info)
{
	int counter = 0;

	(void)info;
	print_oct(va_arg(args, unsigned int), &counter);
	return (counter);
}
