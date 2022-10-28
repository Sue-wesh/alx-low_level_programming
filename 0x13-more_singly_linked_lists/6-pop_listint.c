#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete first node of a list
 * @head: the first element
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node = NULL;
	int data;

	next_node = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = next_node;

	return (data);
}
