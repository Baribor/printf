#include "main.h"
#include <stdarg.h>

/**
 * specifier_b - Function to handle the b custom specifier
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_b(va_list args, specifier_info info)
{
	int counter = 0;

	(void)info;
	print_bin(&counter, va_arg(args, unsigned int));
	return (counter);
}
