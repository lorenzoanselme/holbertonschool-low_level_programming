#include "main.h"

/**
 * _sqrt_recursion2 - helper to find natural square root recursively
 * @n: the number to find the square root of
 * @i: current guess for the square root
 *
 * Return: the natural square root, or -1 if none found
 */
int _sqrt_recursion2(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);

	return (_sqrt_recursion2(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root, or -1 if none found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_recursion2(n, 1));
}
