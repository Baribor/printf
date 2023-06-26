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
	int count = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			count += handle_format(format, args);
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
