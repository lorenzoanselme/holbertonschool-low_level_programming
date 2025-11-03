#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the natural square root, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	static int i = 0;

	if (n < 0)
		return (-1);

	if (i * i == n)
	{
		int res = i;
		i = 0;
		return (res);
	}

	if (i * i > n)
	{
		i = 0;
		return (-1);
	}

	i++;
	return (_sqrt_recursion(n));
}
