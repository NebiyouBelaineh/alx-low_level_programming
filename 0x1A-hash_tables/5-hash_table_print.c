#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, size, flag = 0;
	hash_node_t *current;
	char *key, *value;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}

	size = ht->size;
	printf("{");
	for (index = 0; index < size; index++)
	{
		if (ht->array[index] != NULL)
		{
			if (flag == 1)
				printf(", ");
			current = ht->array[index];
			while (current != NULL)
			{
				key = current->key;
				value = current->value;
				printf("'%s': '%s'", key, value);
				current = current->next;
				if (current != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}

	printf("}\n");
}
