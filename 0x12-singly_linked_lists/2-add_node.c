#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add new elements at beginning of list
 * @head: pointer to pointer
 * @str: pointer to the string
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t newNode;
	newNode = malloc(sizeof(list_t));

	char *c = strdup(str);
	newNode.str = c;
	newNode.next = **head;

	newNode = **head;

	return(**head);
}
