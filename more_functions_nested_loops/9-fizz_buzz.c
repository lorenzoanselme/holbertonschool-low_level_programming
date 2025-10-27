#include <stdio.h>
/**
* main - Entry point
*
* Return : Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");

			if (i % 3 == 0)
			{
				printf("Fizz ");
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
	return (0);
}
