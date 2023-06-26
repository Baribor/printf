
/**
 * is_flag - Checks if the char is a flag
 * @c: Char to check
 * Return: 1 if flag else 0
 */
int is_flag(char c)
{
	return (c == ' ' || c == '#' || c == '+' || c == '-' || c == '0');
}
