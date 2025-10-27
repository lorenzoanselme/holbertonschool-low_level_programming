#include "main.h"
/**
* _isdigit - checks for uppercase character
*
* @n: The character to check
*
* Return: 1 if uppercase, 0 otherwise
*/
int _isdigit(int n)
{
	if (n >= '0' && n <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
