#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index provided
 * of a listint_t linked list
 *
 * @head: address of the head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 for success or -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *nextNode;
	size_t nodeIndex = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	current = *head;

	while (current != NULL)
	{
		current = current->next;
		nodeIndex++;
	}
	if (index > nodeIndex)
		return (-1);
	current = *head;
	nodeIndex = 0;

	if (index == 0)
	{
		nextNode = current->next;
		free(current);
		current = nextNode;
		*head = current;
		return (1);
	}
	while (current != NULL)
	{
		if (nodeIndex + 1 == index)
		{
			nextNode = (current->next)->next;
			free(current->next);
			current->next = nextNode;
			return (1);
		}
		nodeIndex++;
		current = current->next;
	}
	return (-1);
}
