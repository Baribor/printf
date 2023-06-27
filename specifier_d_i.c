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
	long int v;
	int len;

	if (info.length && info.length == 'l')
		v = va_arg(args, long int);
	else
		v = va_arg(args, int);

	if (info.width)
	{
		len = get_int_length(v, 10);
		if (v < 0)
			len++;
		if (len < info.width)
		{
			len = info.width - len;
			counter += len;
			print_space(len);
		}
	}

	if (info.space && v >= 0)
		counter += _putchar(info.space);

	counter += print_number(v);
	return (counter);
}
