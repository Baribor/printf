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

	if (info.width)
	{
		if (len < info.width)
		{
			len = info.width - len;
			counter += len;
			print_space(len);
		}
	}
	counter += _puts(v);

	return (counter);
}
