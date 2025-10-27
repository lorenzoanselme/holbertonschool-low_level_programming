#include "main.h"

/**
 * _puts - affiche une chaîne de caractères suivie d’un saut de ligne
 * @str: pointeur vers la chaîne à afficher
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
