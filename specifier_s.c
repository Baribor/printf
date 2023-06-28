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
	int len = 0, counter = 0;

	v = va_arg(args, char *);

	if (!v)
		return (_puts("(null)"));

	while (v[len])
		len++;

	if (info.precision > -1)
		len = info.precision;

	if (info.width && len < info.width)
	{
		len = info.width - len;
		counter += len;
		print_char_times(len, ' ');
	}
	counter += info.precision > -1 ? _puts_times(v, info.precision) : _puts(v);

	return (counter);
}
