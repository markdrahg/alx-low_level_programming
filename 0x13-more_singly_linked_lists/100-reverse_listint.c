#include "lists.h"

/**
 * reverse_listint - linked list reverses
 * @head: a pointer to the first node
 *
 * Return: pointer to new list first node
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

