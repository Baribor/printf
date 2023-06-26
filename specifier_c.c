#include <stdarg.h>
#include "main.h"

/**
 * specifier_c - Function to handle the c specifier
 * @counter: Pointer to the character pointer
 * Return: Void
 */
void specifier_c(int *counter, ...)
{
	va_list args;

	va_start(args, counter);
	*counter += _putchar(va_arg(args, int));
	va_end(args);
}
