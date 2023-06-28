
/**
 * get_int_length - Gets the length of an int
 * @n: The target int
 * @radix: Number base of the int
 * Return: The length of the int.
 */
int get_int_length(long int n, int radix)
{
	int len = 0;

	while (n)
	{
		n /= radix;
		len++;
	}
	return (len);
}

/**
 * _max - Get the max of two int
 * @a: First int
 * @b: Second int
 * Return: The max int
 */
int _max(int a, int b)
{
	return (a > b ? a : b);
}
