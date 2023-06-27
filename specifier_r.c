#include <stdarg.h>
#include "main.h"

/**
 * specifier_r - Function to handle the custom r specifier
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_r(va_list args, specifier_info info)
{
	int len = 0;
	char *v;
	int counter = 0;

	(void)info;
	v = va_arg(args, char *);

	while (v[len])
		len++;

	while (len > 0)
		counter += _putchar(v[--len]);
	return (counter);
}
