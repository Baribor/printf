#include <stdarg.h>
#include "main.h"

/**
 * specifier_r - Function to handle the custom r specifier
 * @counter: Pointer to the character pointer
 * Return: Void
 */
void specifier_r(int *counter, ...)
{
	int len = 0;
	va_list args;
	char *v;

	va_start(args, counter);

	v = va_arg(args, char *);

	while (v[len])
		len++;

	while (len > 0)
		*counter += _putchar(v[--len]);
	va_end(args);
}
