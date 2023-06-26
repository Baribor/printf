#include <stdarg.h>
#include "main.h"

/**
 * specifier_u - Function to handle the u specifier
 * @counter: Pointer to the character pointer
 * Return: Void
 */
void specifier_u(int *counter, ...)
{
	va_list args;

	va_start(args, counter);

	*counter += print_number_unsign(va_arg(args, unsigned int));
	va_end(args);
}
