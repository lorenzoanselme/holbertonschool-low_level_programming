#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a valid password for 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum = 0, c;

	srand(time(NULL));

	while (sum < 2772)
	{
		c = rand() % 94 + 33; /* printable ASCII char */
		sum += c;
		printf("%c", c);
	}

	if (sum != 2772)
		printf("%c", 2772 - (sum - c));

	return (0);
}
