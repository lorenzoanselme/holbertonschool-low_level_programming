#include "main.h"

/**
 * puts2 - imprime un caractère sur deux d'une chaîne,
 *         en commençant par le premier caractère
 * @str: pointeur vers la chaîne de caractères
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
