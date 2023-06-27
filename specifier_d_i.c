#include <stdarg.h>
#include "main.h"

/**
 * specifier_d_i - Function to handle the d and i specifiers
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_d_i(va_list args, specifier_info info)
{
	int counter = 0;
	int v = va_arg(args, int);

	if (info.space && v >= 0)
		counter += _putchar(info.space);

	counter += print_number(v);
	return (counter);
}
