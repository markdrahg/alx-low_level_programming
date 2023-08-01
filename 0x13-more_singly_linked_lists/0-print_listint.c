#include "lists.h"

/**
 * print_listint - outputs all elements of a linked list
 * @h: listint_t to print linked list type
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t vul = 0;

	while (h)
	{
		printf("%d\n", h->n);
		vul++;
		h = h->next;
	}

	return (vul);
}

