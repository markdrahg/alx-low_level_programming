#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: list listint_t to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *tofree;

	while (head)
	{
		tofree = head->next;
		free(head);
		head = tofree;
	}
}

