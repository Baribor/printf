#include "main.h"

/**
 * fill_flag_info - Fill flag details
 * @info: The info object
 * @flag: The flag to fill
 */
void fill_flag_info(specifier_info *info, char flag)
{
	switch (flag)
	{
	case ' ':
		info->space = ' ';
		break;
	case '+':
		info->space = '+';
		break;
	case '#':
		info->alt = 1;
	default:
		break;
	}
}

/**
 * fill_width - Sets the width flag value
 * @info: Specifier info
 * @s: String to format
 * @i: Current string index
 * Return: width
 */
int fill_width(specifier_info *info, const char *s, int i)
{
	int c = 0, e;
	int j = i;
	int w = 0;
	int d;

	while (is_digit(s[i]))
	{
		c++;
		i++;
	}

	i = j;
	e = c;
	while (is_digit(s[i]))
	{
		d = s[i] - 48;
		w += _pow(10, --c) * d;
		i++;
	}

	info->width = w;
	return (e);
}

/**
 * fill_precision - Sets the precision flag value
 * @info: Specifier info
 * @s: String to format
 * @i: Current string index
 * Return: width
 */
int fill_precision(specifier_info *info, const char *s, int i)
{
	int w = 0, c = 0;
	int j = i + 1;
	int d, e;

	while (is_digit(s[i + 1]))
	{
		c++;
		i++;
	}

	i = j;
	e = c;
	while (is_digit(s[i]))
	{
		d = s[i] - 48;
		w += _pow(10, --c) * d;
		i++;
	}

	info->precision = w;
	return (e + 1);
}
