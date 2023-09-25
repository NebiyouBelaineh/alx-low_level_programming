#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 *
 * @h: is the list to have its elements printed
 *
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
