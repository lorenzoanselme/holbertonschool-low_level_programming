#include "function_pointers.h"

/**
 * print_name - prints a name using a callback function
 * @name: the name to print
 * @f: pointer to a function that takes a char* argument
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
