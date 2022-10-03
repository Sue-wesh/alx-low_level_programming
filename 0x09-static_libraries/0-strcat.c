#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate two strings
 * @dest: destination where the result is placed
 * @src: the source string
 * Return: return the result
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}

/**
 * main - check code
 * Return:0
 */
int main(void)
{
}
