#include "lists.h"

/**
 * free_listint_safe - a linked list freer
 * @h: the pointer to the first node
 *
 * Return: total freed liste elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t m = 0;
	int df;
	listint_t *space;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		df = *h - (*h)->next;
		if (df > 0)
		{
			space = (*h)->next;
			free(*h);
			*h = space;
			m++;
		}
		else
		{
			free(*h);
			*h = NULL;
			m++;
			break;
		}
	}

	*h = NULL;

	return (m);
}

