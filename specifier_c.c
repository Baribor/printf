#include "main.h"

/**
 * specifier_c - Function to handle the c specifier
 * @counter: Pointer to the character pointer
 * @value: void pointer to the value to print
 * Return: Void
 */
void specifier_c(int *counter, void *value)
{
	char v = *((char *)value);
	*counter += _putchar(v);
}
