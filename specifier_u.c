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
	unsigned long int v;

	if (info.length && info.length == 'l')
		v = va_arg(args, unsigned long int);
	else
		v = va_arg(args, unsigned int);

	return (print_number_unsign(v));
}
