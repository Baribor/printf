#include "main.h"

/**
 * specifier_r - Function to handle the custom r specifier
 * @counter: Pointer to the character pointer
 * @value: void pointer to the value to print
 * Return: Void
 */
void specifier_r(int *counter, void *value)
{
	int len = 0;
	char *v = (char *)value;

	while (v[len])
		len++;

	while (len > 0)
		*counter += _putchar(v[--len]);
}
