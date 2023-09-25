#include "lists.h"
/**
 * add_nodeint_end - adds new node at the end of the list
 *
 * @head: contains the address of the head of the list
 * @n: integer element to add to the new node
 *
 * Return: address of the new node inserted at the end of
 * the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *current;

	current = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (current->next != NULL)
		current = current->next;

	current->next = newNode;
	return (current->next);
}
