#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - prints our string in reverse
 * @s: character we output
 */
void print_rev(char *s)
{
	int x;

	x = strlen(s);
	while (s[x] != s[0])
	{
		x--;
		putchar(s[x]);
	}
	putchar('\n');
}
