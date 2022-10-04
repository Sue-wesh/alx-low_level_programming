#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - return pointer to a newly allocated space
 * @str: the string array
 * Return: NULL if str is null
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		char *n = NULL;

		fprintf(stderr, "%s", n);
		return (NULL);
	}
	return (strdup(str));
}
