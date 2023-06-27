#include <stdarg.h>
#include "main.h"

/**
 * specifier_percent - Function to handle the % specifier
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_percent(va_list args, specifier_info info)
{
	(void)info;
	(void)args;

	return (_putchar('%'));
}
