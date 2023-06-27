#include <stdarg.h>
#include "main.h"

specifier_info get_info(const char *format)
{
	int i = 1;
	specifier_info info;

	while (format[i])
	{
		if (is_flag(format[i]))
		{

			fill_flag_info(&info, format[i]);
		}
		else if (is_modifier(format[i]))
		{
			info.modifier = format[i];
			break;
		}
		i++;
	}
	info.count = i;
	return (info);
}

/**
 * handle_format - main format function
 * @format: String to format
 * @args: Arguments
 * @info: Specifier info
 * Return: Number of characters printed
 */
int handle_format(const char *format, va_list args, specifier_info info)
{
	int (*action)(va_list args, specifier_info info);
	int count = 0;

	action = get_specifier_action(info.modifier);

	if (action)
	{
		count += action(args, info);
	}
	else
	{
		count += _putchar(*(--format));
	}
	return (count);
}
