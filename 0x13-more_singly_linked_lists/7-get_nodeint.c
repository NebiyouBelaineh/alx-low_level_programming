#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node in a listint_t list
 *
 * @head: head of the node
 * @index: index of the node we are looking for
 *
 * Return: node found with the index or NULL if it doesn't exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t nodeIndex = 0;
	listint_t *current = head;

	if (current == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (nodeIndex == index)
			return (current);
		current = current->next;
		nodeIndex++;
	}
	return (NULL);
}
