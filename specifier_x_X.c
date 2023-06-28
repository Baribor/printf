#include <stdarg.h>
#include "main.h"

/**
 * specifier_x - Function to handle the x specifier
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_x(va_list args, specifier_info info)
{
	int counter = 0;
	unsigned long int v;
	int len = 0, len2;

	if (info.length && info.length == 'l')
		v = va_arg(args, unsigned long int);
	else
		v = va_arg(args, unsigned int);

	if (info.alt && v > 0)
		len += 2;

	len += get_int_length(v, 16);
	len2 = len;
	counter = _max(len, _max(info.width, info.precision));

	if (info.precision > -1 && info.precision > len)
		len = info.precision;

	if (info.width && len < info.width)
	{
		len = info.width - len;
		print_char_times(len, ' ');
	}

	if (info.precision > -1 && len2 < info.precision)
	{
		len2 = info.precision - len2;
		print_char_times(len2, '0');
	}

	if (info.alt && v > 0)
		counter += _puts("0x");

	print_hex(v, 1);
	return (counter);
}

/**
 * specifier_X - Function to handle the X specifier
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_X(va_list args, specifier_info info)
{
	int counter = 0;
	unsigned long int v;
	int len = 0, len2;

	if (info.length && info.length == 'l')
		v = va_arg(args, unsigned long int);
	else
		v = va_arg(args, unsigned int);

	if (info.alt && v > 0)
		len += 2;
	len += get_int_length(v, 16);
	len2 = len;
	counter = _max(len, _max(info.width, info.precision));

	if (info.precision > -1 && info.precision > len)
		len = info.precision;

	if (info.width && len < info.width)
	{
		len = info.width - len;
		print_char_times(len, ' ');
	}

	if (info.precision > -1 && len2 < info.precision)
	{
		len2 = info.precision - len2;
		print_char_times(len2, '0');
	}

	if (info.alt && v > 0)
		counter += _puts("0X");
	print_hex(v, 0);
	return (counter);
}
