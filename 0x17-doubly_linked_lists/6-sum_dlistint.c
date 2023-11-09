#include "lists.h"

/**
 * sum_dlistint - sums all of the data in 'n' of a dlistint_t linked list
 * @head: head of the list
 *
 * Return: the sume of all data in the dlistint_t list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}

