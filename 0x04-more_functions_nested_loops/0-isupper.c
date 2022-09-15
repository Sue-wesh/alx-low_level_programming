#include <stdio.h>
#include "main.h"

/**
 * _isupper - find if the character is uppercase
 * @c: character we display on stdout
 * Return: return 1 if uppercase and
 * 0 otherwise
 */

int _isupper(int c)
{
	if (c == toupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
