#include "lists.h"
/**
 * find_listint_loop - Finds the loop in a linked list if any
 *
 * @head: head of the linked list
 *
 * Return: Address of the node where the loop starts or Null
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return (NULL);
	current = head;

	while (current != NULL)
	{
		if ((current - current->next) > 0)
			current = current->next;
		else
			return (current);
	}
	return (NULL);
}
