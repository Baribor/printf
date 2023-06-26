#include "main.h"

/**
 * specifier_percent - Function to handle the % specifier
 * @counter: Pointer to the character pointer
 * Return: Void
 */
void specifier_percent(int *counter, ...)
{
	*counter += _putchar('%');
}
