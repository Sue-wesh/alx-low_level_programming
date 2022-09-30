#include <stdio.h>

/**
 * main - print all arguments include first
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 at end
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
