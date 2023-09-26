#include "lists.h"
/**
 * sum_listint - sums all of the data in 'n' of a listint_t
 * list
 *
 * @head: head of the list
 *
 * Return: sum of the list data in n or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (current == NULL)
		return (sum);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
