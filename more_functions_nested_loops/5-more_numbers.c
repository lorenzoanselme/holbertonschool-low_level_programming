#include "main.h"
/**
* more_numbers - print numbers from 0 to 14 10 times
*
* Return : void
*/
void more_numbers(void)
{
	int j;
	int i;
	int k;

	for (j = 0; 0 <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
		}
		for (k = 0; i <= 4; k++)
		{
			_putchar(k + 10);
		}
	}
	_putchar('\n');
}
