#include <stdio.h>
#include <string.h>

/**
 * _strstr - sunction locates a substring in a string
 * @haystick: the string
 * @needle: the substring being serached in string
 * Return: the end result
 */
char *_strstr(char *haystick, char *needle)
{
	char *x = strstr(haystick, needle);

	return (x);
}

/**
 * main - code
 * Return:0
 */
int main(void)
{}
