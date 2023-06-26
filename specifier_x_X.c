#include <stdarg.h>
#include "main.h"

/**
 * specifier_x - Function to handle the x specifier
 * @counter: Pointer to the character pointer
 * Return: Void
 */
void specifier_x(int *counter, ...)
{
	va_list args;

	va_start(args, counter);
	print_hex(va_arg(args, unsigned int), 1, counter);
	va_end(args);
}

/**
 * specifier_X - Function to handle the X specifier
 * @counter: Pointer to the character pointer
 * Return: Void
 */
void specifier_X(int *counter, ...)
{
	va_list args;

	va_start(args, counter);
	print_hex(va_arg(args, unsigned int), 0, counter);
	va_end(args);
}
