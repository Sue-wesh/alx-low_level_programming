#include <stdio.h>

/**
 * is_palindrome - check if string is a palindrome
 * ie it can be read the same forward and backwards
 * @s: the string array
 * Return: 1 if palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s)
	{
		is_palindrome(s + 1);
		putchar(*s);
	}
	return (0);
}
