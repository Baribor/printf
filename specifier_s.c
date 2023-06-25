#include "main.h"

/**
 * specifier_s - Function to handle the s specifier
 * @counter: Pointer to the character pointer
 * @value: void pointer to the value to print
 * Return: Void
 */
void specifier_s(int *counter, void *value)
{
	char *v = (char *)value;

	if (!v)
	{
		*counter += _puts("(nil)");
		return;
	}
	*counter += _puts(v);
}
