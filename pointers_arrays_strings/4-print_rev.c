#include "main.h"
/**
 * print_rev - affiche une chaîne de caractères en ordre inverse
 * @s: pointeur vers la chaîne à afficher
 *
 * Return: void
 */
void print_rev(char *s)
{
	int c;
	int i;

	for (c = 0; s[c] != '\0'; c++)
	{
	}

	for (i = c - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
