#include "main.h"

/**
 * is_flag - Checks if the char is a flag
 * @c: Char to check
 * Return: 1 if flag else 0
 */
int is_flag(char c)
{
	return (c == ' ' || c == '#' || c == '+' || c == '-' || c == '0');
}

/**
 * is_length - Checks if the char is a flag
 * @c: Char to check
 * Return: 1 if flag else 0
 */
int is_length(char c)
{
	return (c == 'l' || c == 'h');
}

/**
 * is_modifier - Checks if a char is a modifier
 * @c: Char to check
 * Return: 1 if true else 0
 */
int is_modifier(char c)
{
	int (*action)(va_list args, specifier_info info) = get_specifier_action(c);

	if (!action)
		return (0);
	return (1);
}
