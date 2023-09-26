#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list with its
 * memory address and integer element
 *
 * @head: head of the listint_t linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0, index = 0;
	const listint_t *current, *duplicate;

	if (head == NULL)
		exit(98);
	current = head;
	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		nodes++;
		current = current->next;
		duplicate = head;
		index = 0;
		while (index < nodes)
		{
			if (current == duplicate)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (nodes);
			}
			duplicate = duplicate->next;
			index++;
		}

	}
	return (nodes);
}
