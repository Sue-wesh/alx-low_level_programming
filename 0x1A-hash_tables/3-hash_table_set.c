#include "hash_tables.h"

/**
 * hash_table_set - adds/updates an element to the hash table
 * @ht: hash table
 * @key: the unique key used to get index
 * @value: associated with the key.. value must be duplicated
 * use strdup to duplicate value
 *
 * Return: 1 on successi
 * Otherwise 0
 *
 * Comment: in case of collision, add new node at beg of list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element;
	char *dup_value;
	unsigned long int index, i;

	/*if there's no table/key is null/value is null it failed*/
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	dup_value = strdup(value);
	if (dup_value == NULL)
		return (0); /*failed to duplicate*/

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = dup_value;
			return (1);
		}
	}

	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
	{
		free(dup_value);
		return (0);
	}
	new_element->key = strdup(key);
	if (new_element->key == NULL)
	{
		free(new_element);
		return (0);
	}
	new_element->value = dup_value;
	new_element->next = ht->array[index];
	ht->array[index] = new_element;

	return (1);
}
