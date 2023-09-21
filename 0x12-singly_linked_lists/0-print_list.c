#include "lists.h"
/**
 * print_list -		prints all elements of the list 'h'
 *
 * @h:			list to be printed
 *
 * Return:		number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
