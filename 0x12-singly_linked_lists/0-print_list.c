#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints elements of a list
 * @h: stands for an element in a list
 * Return: h at the end
 */
size_t print_list(const list_t *h)
{
	if (h != NULL)
	{
		printf("%d %s\n", h->len, h->str);
		printf("%d %s\n", h->len, h->next->str);
		h = h->next;	
	}
	else
		printf("%d", '\0');
	return (0);
}
