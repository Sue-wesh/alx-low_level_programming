#include <stdio.h>

/**
 * main - program that prints numbers to 100
 *
 * Return: 0 at the end
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			if ((i % 3 == 0) && (i % 5 == 0))
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			if ((i % 5 == 0) && (i % 3 == 0))
				printf("FizzBuzz ");
			else
				printf("Buzz ");
		}
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
