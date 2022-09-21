#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncpy - copy string from dest to src
 * @dest: the destination of the copying
 * src: the string we are copying
 * Return: the result/ output
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
