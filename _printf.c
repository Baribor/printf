#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - format and print data
 * @format: String to format.
 * Description: Print ARGUMENT(s) according to FORMAT,
 * or execute according to OPTION
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	void (*action)(int *, void *);
	int count = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			action = get_specifier_action(*(++format));

			if (action)
			{
				_format(format, args, &count, action);
			}
			else
			{
				count += _putchar(*(--format));
			}
		}
		else
		{
			count += _putchar(*format);
		}

		format++;
	}

	va_end(args);

	return (count);
}
