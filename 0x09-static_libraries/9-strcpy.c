#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - copy string from dest to src
 * @dest: the destination of the copying
 * @src: the string we are copying
 * Return: the result/ output
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; src[i] != '\0'; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

/**
 * main - code
 * Return:0
 */
int main(void)
{}
