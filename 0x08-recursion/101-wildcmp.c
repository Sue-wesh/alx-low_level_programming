#include <stdio.h>

/**
 * wildcmp - compare two string if they are identity
 * @s1: first  string
 * @s2: second string
 * Return: 1 if identical and 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (s1 == s2)
		return (1);
	else
		return (0);
}
