#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: our parameter
 */
void rev_string(char *s)
{
	int l;

	for (l = strlen(s);s[l] != s[0]; l--)
	{
		putchar(s[l]);
	}
}
