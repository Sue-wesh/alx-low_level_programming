#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if character is digit or not
 *
 * @c: the character we print at stdout
 *
 * Return: 1 if digit and
 * 0 for otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
