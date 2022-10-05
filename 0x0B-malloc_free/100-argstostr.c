#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenate all arquments of ur prog
 * @ac: the number of arguments
 * @av: array of arguments
 * Return: Null if ac is 0 and av is null
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		str = malloc(sizeof(char) * strlen(av[i]));
		strcat(str, av[i]);
		printf("%s\n", str);
	}
	return (str);
}
