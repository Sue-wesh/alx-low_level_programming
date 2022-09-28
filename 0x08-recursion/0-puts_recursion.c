#include <stdio.h>

/**
 * _puts_recursion - print a string using recursion method
 * @s: the string array
 * Return: the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	putchar(*s);
	_puts_recursion(s + 1);
	putchar('\n');
}
