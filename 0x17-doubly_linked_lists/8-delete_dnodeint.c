#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * linked list
 * @head: address of the head of the node
 * @index: the index of the node to be deleted
 *
 * Return: 1 for success, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int node_count = 0;
	dlistint_t *current = *head;

	while (current != NULL)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			return (1);
		}
		if (node_count == index)
		{
			(current->next)->prev = current->prev;
			(current->prev)->next = current->next;
			return (1);
		}
		current = current->next;
		node_count++;
	}
	return (-1);
}
