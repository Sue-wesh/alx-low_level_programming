#include <stdio.h>

/**
 * main - sum of fibonacci numbers that dont exceed 4m
 * Return: 0 at the end
 */
int main(void)
{
	int i;
	int first = 1, second = 2;
	int third = first + second;

	for (i = 3; third <= 4000000; i++)
	{
		int sum;

		first = second;
		second = third;
		third = second + first;

		if (i % 2 == 0)
		{
			sum = sum + i;
		}
		printf("%d", sum);
	}
	return (0);
}
