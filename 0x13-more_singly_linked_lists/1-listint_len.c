#include "lists.h"

/**
 * listint_len - outputs number of elements in a linked list
 * @h: listint_t to traverse linked list type
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t val = 0;

	while (h)
	{
		val++;
		h = h->next;
	}

	return (val);
}

