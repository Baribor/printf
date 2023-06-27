#include <stdarg.h>
#include "main.h"

/**
 * specifier_R - Function to handle the custom R specifier
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_R(va_list args, specifier_info info)
{
	int i = 0;
	int counter = 0;
	char *v;

	(void)info;
	v = va_arg(args, char *);

	while (v[i])
	{
		if (_isalpha(v[i]))
			counter += _putchar(getROT13char(v[i++]));
		else
			counter += _putchar(v[i++]);
	}
	return (counter);
}
