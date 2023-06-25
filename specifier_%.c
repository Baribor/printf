#include "main.h"

/**
 * specifier_percent - Function to handle the % specifier
 * @counter: Pointer to the character pointer
 * @value: void pointer to the value to print
 * Return: Void
 */
void specifier_percent(int *counter, void *value)
{
	(void)value;
	*counter += _putchar('%');
}
