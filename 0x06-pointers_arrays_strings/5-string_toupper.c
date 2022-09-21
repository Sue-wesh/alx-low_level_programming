#include <stdio.h>
#include "main.h"

/**
 * string_toupper - convert all lowercase to uppercase
 * @c: string parameter
 * Return: the result
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
