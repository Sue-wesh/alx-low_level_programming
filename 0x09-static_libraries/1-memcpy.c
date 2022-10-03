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
	memcpy(dest, src, n);
	return (memcpy(dest, src, n));
}

/**
 * main - code
 * Return: 0
 */
int main(void)
{}
