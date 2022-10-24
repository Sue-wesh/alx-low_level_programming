#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: the structure
 */
void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));

	char *name;
	char *owner;
	float age;

	if (d == NULL)
		printf("%p", NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
