#include <stdarg.h>
#include "main.h"

/**
 * specifier_s - Function to handle the s specifier
 * @counter: Pointer to the character pointer
 * Return: Void
 */
void specifier_s(int *counter, ...)
{
	va_list args;
	char *v;

	va_start(args, counter);

	v = va_arg(args, char *);

	if (!v)
	{
		*counter += _puts("(null)");
		return;
	}
	*counter += _puts(v);
	va_end(args);
}
