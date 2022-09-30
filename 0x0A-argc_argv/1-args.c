#include <stdio.h>

/**
 * main - function prints the number of arguments passed
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 at the end
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
