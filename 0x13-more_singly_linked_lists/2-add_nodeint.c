#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node at beg of list
 * @head: first node of list
 * @n: value
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
