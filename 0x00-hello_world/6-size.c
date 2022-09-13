#include <stdio.h>

/**
 * main - Entrypoint
 *
 * Description: to find the types
 *
 * Return: Always 0
 */
int main(void)
{
	int intType;
	char charType;
	long int longType;
	long long int long_longType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(intType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long_longType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
