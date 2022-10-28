#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free list listint_t
 * @head: the first element
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
