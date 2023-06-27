#include <stdarg.h>
#include "main.h"

/**
 * specifier_S - Function to handle the custom S specifier
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_S(va_list args, specifier_info info)
{
	int i = 0;
	char *v;
	int counter = 0;

	(void)info;
	v = va_arg(args, char *);

	while (v[i])
	{
		if (v[i] < 32 || v[i] > 126)
		{
			counter += _puts("\\x");
			if (v[i] <= 15)
				counter += _putchar('0');
			print_hex(v[i++], 0, &counter);
			continue;
		}
		counter += _putchar(v[i++]);
	}
	return (counter);
}
