#include "hash_tables.h"
hash_node_t *add_node(const char *key, const char *value);
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
	hash_node_t *new_node, *tmp;

	if (strcmp("", key) == 0)
		return (0);

	size = ht->size;
	index = key_index((unsigned char *)key, size);
	tmp  = ht->array[index];
	/*We need to check key exisits in hash table*/
	if (tmp != NULL)
	{
		while (tmp != NULL)
		{
			if (strcmp(key, tmp->key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
	}
	else
	{
		/*Add key/value pair if it does not exisit*/
		new_node = add_node(key, value);
		if (new_node == NULL)
			return (0);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}

/**
 * add_node - adds a node at the begining of a list
 * @key: value for the key of the hash table
 * @value: value the key corresponds to
 *
 * Return: address of the new node
 */
hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}
