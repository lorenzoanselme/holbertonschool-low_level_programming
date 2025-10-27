#include "main.h"
/**
 * print_triangle - draws a triangle on the terminal
 * @size : size of the square
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i <= size; i++)
	{
		for (j = size - 1; i >= 0; j--)
		{
			_putchar(' ');
		}
	_putchar('#');
	_putchar('\n');
	}
_putchar('\n');
}
