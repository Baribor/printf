#include <stdarg.h>
#include "main.h"

/**
 * specifier_s - Function to handle the s specifier
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_s(va_list args, specifier_info info)
{
	char *v;

	(void)info;
	v = va_arg(args, char *);

	if (!v)
		return (_puts("(null)"));

	return (_puts(v));
}
