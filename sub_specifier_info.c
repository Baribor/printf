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
