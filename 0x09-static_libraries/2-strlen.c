#include "main.h"
#include <stdio.h>

/**
 * _strlen - the length of a string find
 * @s: the character we output
 * Return: the value of x
 */
int _strlen(char *s) /* s=&str[0] */
{
	int x;

	x = 0;
	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}

/**
 * main - code
 * Return:0
 */
int main(void)
{}
