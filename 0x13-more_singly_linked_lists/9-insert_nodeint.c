#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: first element
 * @idx: index of the list where the new node should be added
 * @n: the value
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	unsigned int count = 0;

	new = malloc(sizeof(listint_t));
	idx = 0;
	
	while (*head != NULL)
	{
		if (count == idx)
		{
			new->n = n;
			new = new->next;
		}
	}
	return (new);
}
