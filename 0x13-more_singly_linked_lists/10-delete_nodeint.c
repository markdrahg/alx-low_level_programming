#include "lists.h"

/**
 * delete_nodeint_at_index - a function to delete a node
 * @head: pointer to the first node
 * @index: the index of the node to be deleted
 *
 * Return: 1 for a Success and  -1 for a Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *space = *head;
	listint_t *focus = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(space);
		return (1);
	}

	while (m < index - 1)
	{
		if (!space || !(space->next))
			return (-1);
		space = space->next;
		m++;
	}


	focus = space->next;
	space->next = focus->next;
	free(focus);

	return (1);
}

