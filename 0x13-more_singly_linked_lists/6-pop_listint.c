#include "lists.h"

/**
 * pop_listint - a function to deletes the head node of a linked list
 * @head: pointer to the first node
 *
 * Return: data within deleted element
 * or outputs 0 if the list is null
 */

int pop_listint(listint_t **head)
{
	listint_t *space;
	int vul;

	if (!head || !*head)
		return (0);

	vul = (*head)->n;
	space = (*head)->next;
	free(*head);
	*head = space;

	return (vul);
}

