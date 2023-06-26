#include "main.h"

/**
 * specifier_p - Function to handle the c specifier
 * @counter: Pointer to the character pointer
 * @value: void pointer to the value to print
 * Return: Void
 */
void specifier_p(int *counter, void *value)
{
	unsigned long int addr;

	if (!value)
	{
		*counter += _puts("(nil)");
		return;
	}

	addr = *((unsigned long int *)value);
	*counter += _puts("0x");
	print_hex(addr, 1, counter);
}
