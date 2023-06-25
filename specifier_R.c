#include "main.h"

/**
 * specifier_R - Function to handle the custom R specifier
 * @counter: Pointer to the character pointer
 * @value: void pointer to the value to print
 * Return: Void
 */
void specifier_R(int *counter, void *value)
{
	char *v = (char *)value;
	int i = 0;

	while (v[i])
	{
		if (_isalpha(v[i]))
			*counter += _putchar(getROT13char(v[i++]));
		else
			*counter += _putchar(v[i++]);
	}
}
