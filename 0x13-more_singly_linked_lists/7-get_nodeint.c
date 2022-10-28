#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - return the nth node of list
 * @head: first element
 * @index: index of the node starting at 0
 *
 * Return: NULL if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			printf("%d\n", head->n);
		else
			return (NULL);
		count++;
		head = head->next;
	}
	return (0);
}
