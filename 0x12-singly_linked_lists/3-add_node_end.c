#include "lists.h"

/**
 * add_node_end -	adds node at the end of the list
 *
 * @head:		address of the head node
 * @str:		string to add to the newly added node
 *
 * Return:		the address of the new element or Null if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp, *current;

	current = *head;
	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->len = strlen(str);
	newNode->str = strdup(str);

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
		while (current->next != NULL)
			current = current->next;
	temp = newNode;
	newNode->next = NULL;
	current->next = temp;

	return (current->next);
}
