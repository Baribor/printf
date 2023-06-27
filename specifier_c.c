#include <stdarg.h>
#include "main.h"

/**
 * specifier_c - Function to handle the c specifier
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_c(va_list args, specifier_info info)
{
	(void)info;
	return (_putchar(va_arg(args, int)));
}
