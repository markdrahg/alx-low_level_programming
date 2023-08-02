#include "lists.h"

/**
 * reverse_listint - linked list reverser
 * @head: the pointer to the first node
 *
 * Return: the new list first node pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

