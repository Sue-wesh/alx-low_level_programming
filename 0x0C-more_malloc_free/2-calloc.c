#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: no of times
 * @size: int size
 *
 * Return: the end result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	ptr = malloc(size * nmemb);
	
	if (ptr == 0 || nmemb == 0 || size == 0)
		return (NULL);
	return (ptr);
}
