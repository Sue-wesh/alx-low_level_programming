#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add element at the end
 * @head: pointer to pointer
 * @str: the string array
 *
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;

	current = malloc(sizeof(list_t));

	while(current->next != NULL)
	{
		/*if its not equal to null continue 
		 * iterating until it gets to the last node
		 */
		current = current->next;
	}
	/*now we can add the new element*/
	current->next = malloc(sizeof(list_t));
	current->next->str = strdup(str);
	current->next->next = NULL;
	*head = current;

	return(*head);
}
