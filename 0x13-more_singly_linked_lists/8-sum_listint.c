#include "lists.h"

/**
 * sum_listint - sum up all the data n in a listint_t list
 * @head: first node
 *
 * Return: calculated sum
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *space = head;

	while (space)
	{
		total += space->n;
		space = space->next;
	}

	return (total);
}

