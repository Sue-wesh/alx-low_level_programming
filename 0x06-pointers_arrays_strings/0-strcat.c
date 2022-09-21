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
	strcat(dest, src);

	return (strcat(dest, src));
}
