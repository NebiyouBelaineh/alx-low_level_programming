#include "lists.h"

/**
 * free_dlistint - frees memory for dlistint_t list
 * @head: head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *current = head;

	if (head == NULL)
		return;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
