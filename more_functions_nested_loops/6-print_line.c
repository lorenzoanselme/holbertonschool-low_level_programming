#include "main.h"
/**
* print_line - print straight line
* @n : number of _
* Return : void
*/
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n != 0 && n < 0)
		_putchar('_');
	_putchar('\n');
	}
}
