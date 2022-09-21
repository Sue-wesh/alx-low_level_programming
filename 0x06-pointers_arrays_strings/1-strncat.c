#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings using strncat
 * @dest: destination of the result
 * @src: the first text
 * @n: n bytes from src will be used ie
 * n characters fromsrc will be appended
 * Return: the value of result
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
