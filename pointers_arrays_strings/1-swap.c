#include "main.h"
/**
 * swap_int - takes a pointer
 * @a : valeur a
 * @b : valeur b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
