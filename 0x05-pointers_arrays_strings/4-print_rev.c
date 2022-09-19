#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints our string in reverse
 * @s: character we output
 */
void print_rev(char *s)
{
	int x;

	x = 64;
	while (s[x] != s[0])
	{
		putchar(s[x]);
		x--;
	}
	putchar('\n');
}
