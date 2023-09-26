#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t list
 *
 * @head: address of the head of the list
 *
 * Return: the data of the head node(n) or 0 if it is empty
 */

int pop_listint(listint_t **head)
{
	int nodeData;
	listint_t *nextNode;

	if ((*head) == NULL)
		return (0);
	nodeData = (*head)->n;

	nextNode = (*head)->next;
	free(*head);
	*head = nextNode;

	return (nodeData);
}
