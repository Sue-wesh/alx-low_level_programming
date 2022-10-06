#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string array
 * @s2: the second string array
 * @n: the number of bytes from s2 that ought be concatenated
 * 
 * Return: NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;

	s3 = malloc(strlen(s1) + n + 1);
	if (s3 == NULL)
		return (NULL);
	if (n >= strlen(s2))
	{
		strcpy(s3, s1);
		strcat(s3, s2);
	}
	strcpy(s3, s1);
	strncat(s3, s2, n);
	return (s3);
}
