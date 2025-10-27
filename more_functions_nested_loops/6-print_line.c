#include "main.h"
/**
* print_line - print straight line
* @n : number of _
* Return : void
*/
void print_line(int n)
{
	int i;
	int n;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
