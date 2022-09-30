#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints the sum of arguments
 * @argc: the number of arguments
 * @argv: arryay of arguments
 * Return: 1 if a character is passed and 0 at the end
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char c;
	char *x = &c;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (c = 'a'; c <= 'z'; c++)
			{
				if (argv[i] == x)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
