#include <stdio.h>
#include <string.h>

/**
 * _memset - fnction fills specified mem with
 * a constant byte
 * @s: the memory to be filled
 * @b: the value to be placed instead
 * @n: the number of bytes that will be affected
 * Return: the final result
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (memset(s, b, n));
}

/**
 * main - check code 
 * Return: 0
 */
int main(void)
{
}
