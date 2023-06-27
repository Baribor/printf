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
	int len = 1;
	int counter = 0;

	if (info.width)
	{
		if (len < info.width)
		{
			len = info.width - len;
			counter += len;
			print_space(len);
		}
	}

	counter += _putchar(va_arg(args, int));
	return (counter);
}
