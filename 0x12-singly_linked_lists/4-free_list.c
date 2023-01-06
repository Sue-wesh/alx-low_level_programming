#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * main - frees up a list
 *
 * Return: 0 at the end
 */
int main(void)
{
	list_t h;
	free(h);
	return(0);
}
