#include "main.h"

/**
 * specifier_d_i - Function to handle the d and i specifiers
 * @counter: Pointer to the character pointer
 * @value: void pointer to the value to print
 * Return: Void
 */
void specifier_d_i(int *counter, void *value)
{
	int v = *((int *)value);
	*counter += print_number(v);
}
