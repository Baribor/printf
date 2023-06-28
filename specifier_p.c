#include <stdarg.h>
#include "main.h"

/**
 * specifier_p - Function to handle the c specifier
 * @args: Argument list
 * @info: Specifier info
 * Return: Void
 */
int specifier_p(va_list args, specifier_info info)
{
	void *value;
	unsigned long int addr;
	int counter = 0;

	(void)info;
	value = va_arg(args, void *);

	if (!value)
		return (_puts("(nil)"));

	addr = *((unsigned long int *)value);
	counter += _puts("0x");
	counter += get_int_length(addr, 16);
	print_hex(addr, 1);
	return (counter);
}
