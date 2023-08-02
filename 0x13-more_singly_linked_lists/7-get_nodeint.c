#include "lists.h"

/**
 * get_nodeint_at_index - returns the node of n
 * @head: first node
 * @index: index of the node to be outputed
 *
 * Return: the pointer to the wanted node or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *space = head;

	while (space && m < index)
	{
		space = space->next;
		m++;
	}

	return (space ? space : NULL);
}

