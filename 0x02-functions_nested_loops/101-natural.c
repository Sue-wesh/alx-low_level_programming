#include <stdio.h>

/**
 * main - print sum of numbers that are multiples of 3 and 5
 * Return: the value of 0
 */
int main(void)
{
	int x, sum;

	for (x = 0; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum = sum + x;
		}
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
