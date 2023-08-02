#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to the first node
 *
 * Return: A pointer to the reversed list first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next_node = current->next;

		current->next = prev;

		prev = current;

		current = next_node;
	}

	*head = prev;
	return (*head);
}

