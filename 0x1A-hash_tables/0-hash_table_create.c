#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table using an array
 * @size: size of the array to be created
 *
 * Return: pointer to the newly created hash table, or NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned int index;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		new_table->array = NULL;

	return (new_table);
}
