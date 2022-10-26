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
	int count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		printf("%d %s\n", h->len, h->next->str);
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
		printf("[%d] %s\n", h->len, h->next->str);
	}

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	
	return (count);
}
