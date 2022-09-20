#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - copy from src to dest
 * @dest: the destination
 * @src: the source
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (strcpy(dest, src));
}
