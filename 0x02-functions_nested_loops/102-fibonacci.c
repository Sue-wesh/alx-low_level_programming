#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	int first = 1, second = 2;
	int third = first + second;

	printf("%d, %d, ", first, second);
	for (i = 3; i <= 50; i++)
	{
		printf("%d, ", third);
		if (i == 50)
		{
			printf("%d", third);
		}
		first = second;
		second = third;
		third = first + second;
	}
	putchar('\n');
	return (0);
}
