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
	(void)info;
	return (print_number(va_arg(args, int)));
}
