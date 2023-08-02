#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position
 * @head: the pointer to the first node
 * @idx: place to add the new node
 * @n: the new node data
 *
 * Return: a pointer to the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *k;
	listint_t *space = *head;

	k = malloc(sizeof(listint_t));
	if (!k || !head)
		return (NULL);

	k->n = n;
	k->next = NULL;

	if (idx == 0)
	{
		k->next = *head;
		*head = k;
		return (k);
	}

	for (m = 0; space && m < idx; m++)
	{
		if (m == idx - 1)
		{
			k->next = space->next;
			space->next = k;
			return (k);
		}
		else
			space = space->next;
	}

	return (NULL);
}

