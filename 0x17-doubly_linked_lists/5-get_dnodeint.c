#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t linked list.
 * @head: head of the list
 * @index: index of the node
 *
 * Return: the node's data at the index or NUll if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (node_count == index)
			return (current);
		node_count++;
		current = current->next;
	}
	return (NULL);
}
