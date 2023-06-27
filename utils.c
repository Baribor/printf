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
int (*get_specifier_action(char s))(va_list args, specifier_info info)
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
		{'x', specifier_x},
		{'X', specifier_X},
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
 * _isalpha - checks if a character is an alphabet.
 *
 * @a: character to check
 * Return: 1 if is alphabet else 0
 */
int _isalpha(int a)
{
	if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
	{
		return (1);
	}
	return (0);
}

/**
 * getROT13char - Gets the ROT13 of a char.
 * @c: Char to look up
 * Description: This function assumes any char
 * passed to it is an alpha.
 * Return: The ROT13 char.
 */
char getROT13char(char c)
{
	static const char *rot13Lower = "nopqrstuvwxyzabcdefghijklm";
	static const char *rot13Upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	return (c < 91 ? rot13Upper[c - 65] : rot13Lower[c - 97]);
}

/**
 * init_specifier_info - Initializes the specifier info
 * @info: pointer to the info to initialize
 * Return: Void
 */
void init_specifier_info(specifier_info *info)
{
	info->alt = 0;
	info->space = '\0';
	info->count = 0;
	info->modifier = '\0';
	info->length = '\0';
	info->width = 0;
}

/**
 * is_digit - Checks if a char is digit
 * @c: Char to check
 * Return: 1 if true else 0
 */
int is_digit(char c)
{
	return (c >= 48 && c <= 57);
}
