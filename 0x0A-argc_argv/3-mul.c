#include <stdio.h>
#include <stdlib.h>

/**
 * main - function displays the multiple of arguments
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 1 at the end
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (-1);
}
