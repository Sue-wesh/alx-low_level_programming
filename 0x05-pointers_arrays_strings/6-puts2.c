#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints all strings character by character
 * @str: the characters we output
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
