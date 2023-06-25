#include "main.h"

/**
 * specifier_S - Function to handle the custom S specifier
 * @counter: Pointer to the character pointer
 * @value: void pointer to the value to print
 * Return: Void
 */
void specifier_S(int *counter, void *value)
{
	char *v = (char *)value;
	int i = 0;

	while (v[i])
	{
		if (v[i] < 32 || v[i] > 126)
		{
			*counter += _puts("\\x");
			if (v[i] <= 15)
				*counter += _putchar('0');
			print_hex(v[i++], 0, counter);
			continue;
		}
		*counter += _putchar(v[i++]);
	}
}
