#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - this is to counts
 * the number of nodes in a looped listint_t linked list.
 * @head: A pointer to the first node
 *
 * Return: If list is not looped output 0.
 * Otherwise - output number of unique nodes of the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *m, *hare;
	size_t nodecount = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	m = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (m == hare)
		{
			m = head;
			while (m != hare)
			{
				nodecount++;
				m = m->next;
				hare = hare->next;
			}

			m = m->next;
			while (m != hare)
			{
				nodecount++;
				m = m->next;
			}

			return (nodecount);
		}

		m = m->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - safely prints out a listint_t list.
 * @head: A pointer to the first node.
 *
 * Return: number of nodes in a list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodecount, index = 0;

	nodecount = looped_listint_len(head);

	if (nodecount == 0)
	{
		for (; head != NULL; nodecount++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodecount; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodecount);
}

