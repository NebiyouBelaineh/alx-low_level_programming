#include "lists.h"
/**
 * free_listint2 - frees memory held by listint_t list and
 * sets the head to NULL
 *
 * @head: address of the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL && *head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}