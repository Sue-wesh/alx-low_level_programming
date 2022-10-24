#include "lists.h"

/**
 * add_node_end - add element at the end
 * @head: pointer to pointer
 * @str: the string array
 *
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode =  malloc(sizeof(list_t));

	newNode->str = str;
	newNode->next = NULL;

	if(*head == NULL)
		*head = newNode;
	else
	{
		list_t lastNode = *head;

		while(lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
}
