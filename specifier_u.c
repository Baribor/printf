#include <stdarg.h>
#include "main.h"

/**
 * specifier_u - Function to handle the u specifier
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_u(va_list args, specifier_info info)
{
	(void)info;
	return (print_number_unsign(va_arg(args, unsigned int)));
}
