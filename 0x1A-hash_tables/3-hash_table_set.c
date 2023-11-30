#include "hash_tables.h"

/**
* hash_table_set - adds an element to the hash table
* @ht: is the hash table where an element is to be added
* @key: is the key for the element
* @value: is the value associated with the key.
*
* Return: 1 for success, 0 for failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;

	hash_node_t *new_node = NULL;


	if (strcmp("", key) == 0)
		return (0);

	size = ht->size;
	index = key_index((unsigned char *)key, size);

	/*Check for collision(i.e there is already an element at index)*/
	/*Then add new node at the head of the list*/
	if (ht->array[index] != NULL)
	{
		/*Case where the node exists and value is to be replaced*/
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->key = strdup(value);
			return (1);
		}
		ht->array[index] = ht->array[index]->next;
	}

	/*Create a node at the index in the hash table array*/
	new_node = malloc(sizeof(hash_node_t *));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
