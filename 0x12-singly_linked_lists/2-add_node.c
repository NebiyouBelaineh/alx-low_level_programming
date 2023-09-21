#include "lists.h"

/**
 * add_node -	adds a new node at the begining of a list_t
 *
 * @head:	address of the head of the list
 * @str:	string element being added to the new node
 * Return:	address of the newly added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *temp;


	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);

	if (*head == NULL)
	{
		(*head) = newNode;
		return (newNode);
	}
	else
	{
		temp = *head;
		*head = newNode;
		newNode->next = temp;
		return (newNode);
	}
}
