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
	listint_t *track1, *track2;

	if (head == NULL)
		return (NULL);

	track1 = head->next;
	track2 = (head->next)->next;

	while (track2 != NULL)
	{
		if (track1 == track2)
		{
			track1 = head;
			while (track1 != track2)
			{
				track1 = track1->next;
				track2 = track2->next;
			}
			return (track1);
		}
		track1 = track1->next;
		track2 = (track2->next)->next;
	}

	return (NULL);
}
