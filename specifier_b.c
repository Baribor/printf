#include "main.h"

/**
 * specifier_b - Function to handle the b custom specifier
 * @counter: Pointer to the character pointer
 * @value: void pointer to the value to print
 * Return: Void
 */
void specifier_b(int *counter, void *value)
{
	unsigned int v = *((unsigned int *)value);

	print_bin(counter, v);
}
