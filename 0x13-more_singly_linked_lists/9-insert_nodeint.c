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
	listint_t *current, *temp, *newNode;
	size_t nodeIndex = 0, index = 0;

	if (head == NULL || *head == NULL)
		return (NULL);
	current = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	while (current != NULL)
	{
		current = current->next;
		index++;
	}
	if (idx > index)
	{
		free(newNode);
		return (NULL);
	}
	current = *head;
	if (idx == 0)
	{
		newNode->next = current;
		current = newNode;
		return (current);
	}
	while (current != NULL)
	{
		if (nodeIndex + 1 == idx)
		{
			temp = current->next;
			current->next = newNode;
			newNode->next = temp;
			return (current->next);
		}
		nodeIndex++;
		current = current->next;
	}
	return (NULL);
}
