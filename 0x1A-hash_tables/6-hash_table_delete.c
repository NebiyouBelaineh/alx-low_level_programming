#include "hash_tables.h"
/**
* hash_table_delete - deletes a hash table
* @ht: hash table to be deleted
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, index;
	hash_node_t *current, *temp;

	size = ht->size;

	/*Free hash_table array and its content*/
	for (index = 0; index < size; index++)
	{
		if (ht->array[index] != NULL)
		{
			current = ht->array[index];
			/*Free key/value and current*/
			while (current != NULL)
			{
				temp = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
