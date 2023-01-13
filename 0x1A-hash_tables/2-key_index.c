#include "hash_tables.h"

/**
 * key_index - finds index of a key using hash_djb2 function
 * @key: used to get the index
 * @size: size of the array of the hash table
 *
 * Return: index 
 *
 * Description: remember that to get index we use hash % array_size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
