#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow -  - separate a string into sep words
 * @str: the string array
 * Return: NULL if str is null
 */
char **strtow(char *str)
{
	int i;
	char sep[] = " ";

	str = malloc(sizeof(char) * strlen(str));
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str == NULL)
			return (NULL);
		while(str != NULL)
		{
			printf("%s\n", strtok(str, sep));
			strtok(NULL, sep);
		}
		printf("\n");
	}
	return (0);
}
