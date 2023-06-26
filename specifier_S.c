#include <stdarg.h>
#include "main.h"

/**
 * specifier_S - Function to handle the custom S specifier
 * @counter: Pointer to the character pointer
 * Return: Void
 */
void specifier_S(int *counter, ...)
{
	int i = 0;
	va_list args;
	char *v;

	va_start(args, counter);

	v = va_arg(args, char *);

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
	va_end(args);
}
