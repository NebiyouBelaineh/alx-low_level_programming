#include "lists.h"

/**
 * list_len -	returns the number of elements in a linked list 'h'
 *
 * @h:		list to have the number elements counted
 *
 * Return:	number of lists in 'h'
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
