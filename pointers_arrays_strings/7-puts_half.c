#include "main.h"
/**
 * puts_half - print the second half of a string
 * @str : pointeur vers la chaîne de caractères
 * return - void
 */
void puts_half(char *str)
{
	int i;
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
	}

	for (i = (c + 1) / 2; i < c; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
