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
	for (i = 0; i <= 50; i++)
	{
		printf("%d", third);
		first = second;
		second = third;
		third = first + second;
	}
	return (0);
}
