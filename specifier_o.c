#include <stdarg.h>
#include "main.h"

/**
 * specifier_o - Function to handle the c specifier
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_o(va_list args, specifier_info info)
{
	int counter = 0;
	unsigned long int v;
	int len = 0;

	if (info.length && info.length == 'l')
		v = va_arg(args, unsigned long int);
	else
		v = va_arg(args, unsigned int);

	if (info.alt && v > 0)
		len += 1;

	len += get_int_length(v, 8);
	if (info.precision > -1)
	{
		if (len < info.precision)
		{
			len = info.precision - len;
			counter += len;
			print_char_times(len, '0');
		}
	}

	if (info.width)
	{
		if (len < info.width)
		{
			len = info.width - len;
			counter += len;
			print_char_times(len, ' ');
		}
	}

	if (info.alt && v > 0)
		counter += _puts("0");
	print_oct(v, &counter);
	return (counter);
}
