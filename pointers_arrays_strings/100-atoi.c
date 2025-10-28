#include "main.h"
/**
 * _atoi - converts a string to an integer (safe version)
 * @s: pointer to the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int result;
	int sign;
	int found_digit = 0;
	int max;
	int min;

	result = 0;
	sign = 1;
	max = 2147483647;
	min = -2147483648;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;

			if (sign == 1 && result > (max - (*s - '0')) / 10)
				return (max);
			if (sign == -1 && -result < (min + (*s - '0')) / 10)
				return (min);

			result = result * 10 + (*s - '0');
		}
		else if (found_digit)
			break;
	}

	return (result * sign);
}
