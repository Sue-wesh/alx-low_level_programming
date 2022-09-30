#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum no of coins
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 at end
 */
int main(int argc, char *argv[])
{
	int i, res, b, c;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		res = atoi(argv[i]);

		if (res >= 25)
		{
			b = res % 25;
			if (b == 0)
				printf("%d\n", (res / 25));
			else if (b == 10)
				printf("%d\n", (res / 25) + (b / 10));
			else if (b == 5)
				printf("%d\n", (res / 25) + (b / 10) + (b / 5));
			else if (b == 2)
				printf("%d\n", (res / 25) + (b / 10) + (b / 5) + (b / 2));
			else if (b == 1)
				printf("%d\n", (res / 25) + (b / 10) + (b / 5) + (b / 2) + b);
		}
		else if (res >= 10)
		{
			c = res % 10;
			if (c == 0)
				printf("%d\n", (res / 10));
			else if (c == 5)
				printf("%d\n", (res / 10) + (c / 5));
			else if (c == 2)
				printf("%d\n", (res / 10) + (c / 5) + (c / 2));
			else if (c == 1)
				printf("%d\n", (res / 10) + (c / 5) + (c / 2) + c);
		}
	}
	return (0);
}
