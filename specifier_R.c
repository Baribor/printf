#include <stdarg.h>
#include "main.h"

/**
 * specifier_R - Function to handle the custom R specifier
 * @counter: Pointer to the character pointer
 * Return: Void
 */
void specifier_R(int *counter, ...)
{
	int i = 0;
	va_list args;
	char *v;

	va_start(args, counter);

	v = va_arg(args, char *);

	while (v[i])
	{
		if (_isalpha(v[i]))
			*counter += _putchar(getROT13char(v[i++]));
		else
			*counter += _putchar(v[i++]);
	}
	va_end(args);
}
