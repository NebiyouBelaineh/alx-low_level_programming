#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key
* @ht: hash table
* @key: key we are looking to find
*
* Return: The value associated with the key, or NULL if key was not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	size = ht->size;
	index = key_index((unsigned char *)key, size);

	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)/*Key exists*/
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}

	return (NULL);
}
