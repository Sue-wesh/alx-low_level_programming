#include <stdio.h>
#include <string.h>

/**
 * _strspn - function gets the length of a substring
 * with a certain string or character
 * @s: the string
 * @accept: the string we search in string s and calculate
 * the substring with this string
 * Return: the end result
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}

/**
 * main - code
 * Return:0
 */
int main(void)
{}
