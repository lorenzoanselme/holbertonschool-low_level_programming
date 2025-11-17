#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: character to print
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string followed by a newline
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
 * _isdigit - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if all digits, 0 otherwise
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
 * print_number - prints the number stored in array
 * @s: array of digits
 * @size: size of the array
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
 * init_result - initializes result buffer with '0'
 * @res: pointer to result buffer
 * @size: buffer size
 */
void init_result(char *res, int size)
{
	int i;

	for (i = 0; i < size; i++)
		res[i] = '0';
}

/**
 * multiply - performs the big integer multiplication
 * @num1: first number as string
 * @num2: second number as string
 * @res: result buffer
 * @len1: length of num1
 * @len2: length of num2
 */
void multiply(char *num1, char *num2, char *res, int len1, int len2)
{
	int i, j, carry, prod;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			prod = (num1[i] - '0') * (num2[j] - '0');
			prod += (res[i + j + 1] - '0') + carry;

			res[i + j + 1] = (prod % 10) + '0';
			carry = prod / 10;
		}
		res[i + j + 1] += carry;
	}
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *res;
	int len1 = 0, len2 = 0;

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
	{
		_puts("Error");
		exit(98);
	}

	init_result(res, len1 + len2);
	multiply(num1, num2, res, len1, len2);
	print_number(res, len1 + len2);
	free(res);

	return (0);
}
