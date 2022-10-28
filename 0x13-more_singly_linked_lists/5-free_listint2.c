#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free list listint_t
 * @head: the first element
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	temp->next = *head;
	*head = NULL;

	while (*head != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
