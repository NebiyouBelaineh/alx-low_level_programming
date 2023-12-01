#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table using an array
 * @size: size of the array to be created
 *
 * Return: pointer to the newly created hash table, or NULL if it fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned int index;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;

	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (index = 0; index < size; index++)
		new_table->array[index] = NULL;

	return (new_table);
}

/**
 * shash_table_set - adds an element to a sorted list at
 * the right place in the hash table
 * @ht: is the hash table where an element is to be added
 * @key: is the key for the element
 * @value: is the value associated with the key.
 *
 * Return: 1 for success, 0 for failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;

	shash_node_t *new_node, *tmp;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);
	size = ht->size;
	index = key_index((unsigned char *)key, size);

	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->snext;
	}
	new_node = add_node_s(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new_node->sprev = tmp;
		new_node->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new_node;
		else
			tmp->snext->sprev = new_node;
		tmp->snext = new_node;
	}

	return (1);
}

/**
 * add_node_s - adds a node in a sorted manner
 * @key: value for the key of the hash table
 * @value: value the key corresponds to
 *
 * Return: address of the new node
 */
shash_node_t *add_node_s(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	return (new_node);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key we are looking to find
 *
 * Return: The value associated with the key, or NULL if key was not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index, size;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	size = ht->size;
	index = key_index((unsigned char *)key, size);

	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0) /*Key exists*/
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a hash table in sorted order
 * @ht: hash table to be printed
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	char *key, *value;

	if (ht == NULL)
		return;

	printf("{");

	current = ht->shead;
	while (current != NULL)
	{
		key = current->key;
		value = current->value;
		printf("'%s': '%s'", key, value);
		current = current->snext;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse order
 * @ht: hash table to be printed
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	char *key, *value;

	if (ht == NULL)
		return;

	printf("{");

	current = ht->stail;
	while (current != NULL)
	{
		key = current->key;
		value = current->value;
		printf("'%s': '%s'", key, value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;

	current = ht->shead;
	/*Free key/value and current*/
	while (current != NULL)
	{
		temp = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = temp;
	}
	free(ht->array);
	free(ht);
}
