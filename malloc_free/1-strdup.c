#include "main.h"
#include <stdlib.h>

/**
 * _strdup - retourne un pointeur vers une nouvelle chaîne dupliquée
 * @str: chaîne à dupliquer
 *
 * Return: pointeur vers la nouvelle chaîne, ou NULL si échec
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dup[len] = '\0';

	return (dup);
}
