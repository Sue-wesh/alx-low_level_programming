#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints our string in reverse
 * @s: character we output
 */
void print_rev(char *s)
{
	int x;

	while (str[x] != str[0])
	{
		putchar(str[x]);
		x--;
	}
	putchar('\n');
}
