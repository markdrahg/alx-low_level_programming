#include "lists.h"

/**
 * reverse_listint - listint_t linked list reverser
 * @head: the pointer to the first node
 *
 * Return: new list head node pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *crt = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->new;
		(*head)->new = crt;
		crt = *head;
		*head = new;
	}

	*head = crt;

	return (*head);
}

