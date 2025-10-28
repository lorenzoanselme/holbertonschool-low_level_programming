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

	if (str[c] <= 0)
	{
		_putchar('\n');
	}

	for (i = c / 2; i <= c; i++)
	{
		_putchar(str[i] - 1);
	}
	_putchar('\n');
}
