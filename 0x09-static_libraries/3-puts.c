#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: the character we output
 * Return: the value of x
 */
void _puts(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		putchar(str[x]);
		x++;
	}
	putchar('\n');
}

/**
 * main - code
 * Return:0
 */
int main(void)
{}
