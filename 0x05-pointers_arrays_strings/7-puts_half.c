#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - display half a string
 * @str: what we output
 */
void puts_half(char *str)
{
	int l;

	l = strlen(str) / 2;
	while (str[l] != '\0')
	{
		putchar(str[l]);
		l++;
	}
	putchar('\n');
}
