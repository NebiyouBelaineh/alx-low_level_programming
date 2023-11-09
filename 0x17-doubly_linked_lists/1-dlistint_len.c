#include "lists.h"

/**
 * dlistint_len - counts and returns the number of elements in a list
 * @h: head of the list
 * Return: number of elements in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
