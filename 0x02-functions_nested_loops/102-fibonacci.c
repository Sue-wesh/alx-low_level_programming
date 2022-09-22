#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int i;
	int first = 0, second = 1;
        int third = first + second;

	printf("%d%d", first, second);
	for (i = 1; i <= 50; i++)
	{
		if (i == 50)
		{
			printf("%d", third);
		}
		else
		{
			printf("%d, ", third);
		}
		first = second;
		second = third;
		third = first + second;
	}
	putchar('\n');
	return (0);
}
