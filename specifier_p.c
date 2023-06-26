#include <stdarg.h>
#include "main.h"

/**
 * specifier_p - Function to handle the c specifier
 * @counter: Pointer to the character pointer
 * Return: Void
 */
void specifier_p(int *counter, ...)
{
	void *value;
	va_list args;
	unsigned long int addr;

	va_start(args, counter);
	value = va_arg(args, void *);

	if (!value)
	{
		*counter += _puts("(nil)");
		return;
	}

	addr = *((unsigned long int *)value);
	*counter += _puts("0x");
	print_hex(addr, 1, counter);
	va_end(args);
}
