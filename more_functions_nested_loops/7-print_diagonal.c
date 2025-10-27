#include "main.h"
/**
* print_line - print straight line
* @n : number of \
* Return : void
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(' ');
			_putchar('\\');
		}
	}
	_putchar('\n');
}
