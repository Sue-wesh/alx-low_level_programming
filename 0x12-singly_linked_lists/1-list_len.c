#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: used to traverse the elements
 *
 * Return: the number
 */
size_t list_len(const list_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
