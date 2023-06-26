#include <stdarg.h>
#include "main.h"

/**
 * handle_format - main format function
 * @format: String to format
 * @args: Arguments
 * Return: Number of characters printed
 */
int handle_format(const char *format, va_list args)
{
	void (*action)(int *, ...);
	int count = 0;

	action = get_specifier_action(*(++format));

	if (action)
	{
		_format(format, args, &count, action);
	}
	else
	{
		count += _putchar(*(--format));
	}

	return (count);
}
