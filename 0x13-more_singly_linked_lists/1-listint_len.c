#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * @h: symbolises an element
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
