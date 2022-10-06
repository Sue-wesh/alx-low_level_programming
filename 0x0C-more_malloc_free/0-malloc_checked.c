#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: the argument taken by malloc
 *
 * Return: the result
 */
void *malloc_checked(unsigned int b)
{
	malloc(b);

	if (malloc(b) == NULL)
		exit(98);
	return (malloc(b));
}
