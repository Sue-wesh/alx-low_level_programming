#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table
 * @key: being being searched
 *
 * Return: value associated with the searched key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *element;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	element = ht->array[index];
	while (element && strcmp(element->key, key) != 0)
		/* if they dont compare keep traversing the table/array*/
		element = element->next;

	return ((element == NULL) ? NULL : element->value);
}
