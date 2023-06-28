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
	int len, len2;

	if (info.length && info.length == 'l')
		v = va_arg(args, long int);
	else
		v = va_arg(args, int);

	len = get_int_length(v, 10);
	len2 = len;
	counter += _max(len, _max(info.width, info.precision));
	if (info.precision > -1 && info.precision > len)
		len = info.precision;
	if (v < 0)
		len++;

	if (info.width && len < info.width)
	{
		len = info.width - len;
		print_char_times(len, ' ');
	}

	if (info.precision > -1 && len2 < info.precision)
	{
		len2 = info.precision - len2;
		if (v < 0)
			counter += _putchar('-');
		print_char_times(len2, '0');
	}

	if (info.space && v >= 0)
		counter += _putchar(info.space);

	print_number(info.precision > -1 && v < 0 ? -1 * v : v);
	return (counter);
}
