#include "lists.h"
/**
 * reverse_listint - reverses the listint_t linked list
 *
 * @head: address of the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL, *temp = NULL;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = current;
	}
	*head = temp;
	return (*head);
}
