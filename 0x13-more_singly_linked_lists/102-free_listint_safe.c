#include "lists.h"
/**
 * free_listint_safe - frees memory held by listint_t list
 *
 * @h: address of the head of the linked list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t freed = 0;
	listint_t *current;
	int d = 0;

	if (h == NULL || *h == NULL)
		return (freed);

	while (*h != NULL)
	{
		d = *h - (*h)->next;

		if (d > 0)
		{
			current = *h;
			(*h) = (*h)->next;
			free(current);
			freed++;
		}
		else
		{
			free(*h);
			*h = NULL;
			freed++;
			break;
		}

	}
	*h = NULL;
	return (freed);
}
