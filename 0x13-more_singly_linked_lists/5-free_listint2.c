#include "lists.h"

/**
 * free_listint2 - a function that frees out a linked list
 * @head: a pointer to the to be freed listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *space;

	if (head == NULL)
		return;

	while (*head)
	{
		space = (*head)->next;
		free(*head);
		*head = space;
	}

	*head = NULL;
}

