#include "main.h"

/**
 * specifier_u - Function to handle the u specifier
 * @counter: Pointer to the character pointer
 * @value: void pointer to the value to print
 * Return: Void
 */
void specifier_u(int *counter, void *value)
{
	unsigned int n;

	n = *((unsigned int *)value);
	*counter += print_number_unsign(n);
}
