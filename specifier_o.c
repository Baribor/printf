#include <stdarg.h>
#include "main.h"

/**
 * specifier_o - Function to handle the c specifier
 * @counter: Pointer to the character pointer
 * Return: Void
 */
void specifier_o(int *counter, ...)
{
	va_list args;

	va_start(args, counter);
	print_oct(va_arg(args, unsigned int), counter);
	va_end(args);
}
