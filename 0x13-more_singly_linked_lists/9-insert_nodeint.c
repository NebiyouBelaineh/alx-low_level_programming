#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given
 * position
 *
 * @head: address of the head of the listint_t list
 * @idx: index at which new node should be inserted
 * @n: value of the element n in the new node.
 *
 * Return: address of the new node or Null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head, *newNode;
	size_t nodeIndex = 0;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}
	while (current != NULL)
	{
		if (nodeIndex + 1 == idx)
		{
			newNode->next = current->next;
			current->next = newNode;
			return (current->next);
		}
		nodeIndex++;
		current = current->next;
	}
	return (NULL);
}
