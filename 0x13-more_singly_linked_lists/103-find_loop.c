#include "lists.h"

/**
 * find_listint_loop - loop finder in a linked list
 * @head: focused-on linked list to search
 *
 * Return: address of starter node's loop or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *m = head;
	listint_t *k = head;

	if (!head)
		return (NULL);

	while (m && k && k->next)
	{
		k = k->next->next;
		m = m->next;
		if (k == m)
		{
			m = head;
			while (m != k)
			{
				m = m->next;
				k = k->next;
			}
			return (k);
		}
	}

	return (NULL);
}

