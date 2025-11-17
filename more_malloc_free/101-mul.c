#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - checks if a string is composed only of digits
 * @s: string to check
 * Return: 1 if digits only, 0 otherwise
 */
int _isdigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string using _putchar
 * @s: string
 */
void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * print_number - prints an integer stored in a char array
 * @s: array of digits
 * @size: length of the array
 */
void print_number(char *s, int size)
{
	int i = 0;

	while (i < size && s[i] == '0')
		i++;

	if (i == size)
		_putchar('0');

	while (i < size)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *res;
	int len1 = 0, len2 = 0, i, j, carry, prod;

	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		_puts("Error");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	res = malloc(len1 + len2);
	if (!res)
		return (1);

	for (i = 0; i < len1 + len2; i++)
		res[i] = '0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			prod = (num1[i] - '0') * (num2[j] - '0')
			       + (res[i + j + 1] - '0') + carry;
			res[i + j + 1] = (prod % 10) + '0';
			carry = prod / 10;
		}
		res[i + j + 1] += carry;
	}

	print_number(res, len1 + len2);
	free(res);

	return (0);
}
