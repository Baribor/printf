#include <stdarg.h>
#include "main.h"

/**
 * specifier_d_i - Function to handle the d and i specifiers
 * @counter: Pointer to the character pointer
 * Return: Void
 */
void specifier_d_i(int *counter, ...)
{
	va_list args;

	va_start(args, counter);
	*counter += print_number(va_arg(args, int));
	va_end(args);
}
