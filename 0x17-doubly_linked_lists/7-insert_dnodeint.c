#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: address of the head of the list
 * @idx: index where the new node is to be inserted
 * @n: data the new node will store
 *
 * Return: address of the new node or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int node_count = 0;
	dlistint_t *current, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h != NULL)
		current = *h;
	else
		return (NULL);

	while (current != NULL)
	{
		if (idx == 0)
		{
			new_node->prev = NULL;
			(*h)->prev = new_node;
			new_node->next = *h;
			*h = new_node;
			return (new_node);
		}
		if (node_count + 1 == idx)
		{
			new_node->prev = current;
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		node_count++;
	}
	free(new_node);
	return (NULL);
}
