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
	int sum = 0, i, r;
	char password[16];

	srand(time(NULL));

	for (i = 0; i < 14; i++)
	{
		r = (rand() % 94) + 33;
		password[i] = r;
		sum += r;
	}

	password[14] = 2772 - sum;
	password[15] = '\0';

	printf("%s", password);
	return (0);
}
