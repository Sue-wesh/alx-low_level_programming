#include <stdio.h>
#include "main.h"

/**
 * _isalpha - if c print 1 else 0
 *
 * @c: our parameter
 *
 * Return: 0 if c and 1 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
