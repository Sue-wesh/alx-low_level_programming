#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free list listint_t
 * @head: the first element
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;
	
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(head);
}
