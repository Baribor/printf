#include "main.h"

/**
 * specifier_x - Function to handle the x specifier
 * @counter: Pointer to the character pointer
 * @value: void pointer to the value to print
 * Return: Void
 */
void specifier_x(int *counter, void *value)
{
	unsigned int n;

	n = *((unsigned int *)value);
	print_hex(n, 1, counter);
}

/**
 * specifier_X - Function to handle the X specifier
 * @counter: Pointer to the character pointer
 * @value: void pointer to the value to print
 * Return: Void
 */
void specifier_X(int *counter, void *value)
{
	unsigned int n;

	n = *((unsigned int *)value);
	print_hex(n, 0, counter);
}
