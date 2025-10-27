#include <stdio.h>
/**
 * main - affiche les nombres de 1 à 100 en remplaçant :
 *        multiples de 3 par "Fizz", de 5 par "Buzz" et de 15 par "FizzBuzz"
 *
 * Return: Retourne 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (i % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (i == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
