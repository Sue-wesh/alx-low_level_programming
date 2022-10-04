#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatnate strings
 * @s1: first string array
 * @s2: second string array
 * Return: NULL at failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;

	s3 = malloc(strlen(s1) + strlen(s2) + 1);

	strcpy(s3, s1);
	strcat(s3, s2);

	if (s3 == NULL)
	{
		fprintf(stderr, "Wueeh");
		return (NULL);
	}
	return (s3);
}
