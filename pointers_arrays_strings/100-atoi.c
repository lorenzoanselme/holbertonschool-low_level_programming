#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int result;
	int sign;
	int found_digit = 0;

	result = 0;
	sign = 1;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			result = result * 10 + (*s - '0');
		}
		else if (found_digit)
			break;
	}
	return (sign * result);
}
