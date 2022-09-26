#include <stdio.h>
#include <string.h>

/**
 * _memcpy - function copies to memory area
 * @dest: destination memory
 * @src: source memory
 * @n: no. of bytes that will be copies
 * Return: the end result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned  int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (0);
}
