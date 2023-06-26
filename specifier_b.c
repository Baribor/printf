#include "main.h"
#include <stdarg.h>

/**
 * specifier_b - Function to handle the b custom specifier
 * @counter: Pointer to the character pointer
 * Return: Void
 */
void specifier_b(int *counter, ...)
{
	va_list args;

	va_start(args, counter);
	print_bin(counter, va_arg(args, unsigned int));

	va_end(args);
}
