#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_specifier_action - Function to pick the appropriate action
 * for a specifier.
 * @s: Specifier character
 * Return: Specifier action for the specifier s, NULL
 * if the specifier is not valid.
 */
void (*get_specifier_action(char s))(int *, void *)
{
	int i = 0;
	specifier specifiers[] = {
		{'c', specifier_c},
		{'s', specifier_s},
		{'S', specifier_S},
		{'%', specifier_percent},
		{'i', specifier_d_i},
		{'d', specifier_d_i},
		{'b', specifier_b},
		{'p', specifier_p},
		{'u', specifier_u},
		{'x', specifier_x_X},
		{'X', specifier_x_X},
		{'o', specifier_o},
		{'r', specifier_r},
		{'R', specifier_R},
		{'\0', NULL}};

	while (specifiers[i].sym)
	{
		if (specifiers[i].sym == s)
			return (specifiers[i].action);
		i++;
	}

	return (NULL);
}

/**
 * _format - Main formatting function
 * @s: String to format
 * @args: variable arguments
 * @counter: Pointer to character pointer
 * @action: The action to use in the formatting
 * Return: Void
 */
void _format(const char *s, va_list args, int *counter,
			 void (*action)(int *counter, void *value))
{
	char *argStr;
	int argInt;
	unsigned int argUnsignedInt;

	switch (*s)
	{

	case 'r':
	case 'R':
	case 's':
	case 'S':
		argStr = va_arg(args, char *);
		action(counter, argStr);
		break;

	case '%':
		action(counter, NULL);
		break;

	/* Specifiers that work with signed integers */
	case 'i':
	case 'd':
		argInt = va_arg(args, int);
		action(counter, &argInt);
		break;

	/* Specifiers that work with unsigned integers */
	case 'u':
	case 'x':
	case 'X':
	case 'o':
	case 'c':
	case 'p':
	case 'b':
		argUnsignedInt = va_arg(args, unsigned int);
		action(counter, &argUnsignedInt);
		break;
	default:
		break;
	}
}
