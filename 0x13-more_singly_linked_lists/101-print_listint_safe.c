#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - print a linked list
 * @head: the first element
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int count;

	for (count = 0; head != NULL; count++)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
	return (count);
}
