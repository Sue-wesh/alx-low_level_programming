#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - search a string for any set of bytes
 * @s: the string to be searched
 * @accept: any bytes in this string is searched in string s
 * Return: the end result
 */
char *_strpbrk(char *s, char *accept)
{
	char *x = strpbrk(s, accept);

	return (x);
}
