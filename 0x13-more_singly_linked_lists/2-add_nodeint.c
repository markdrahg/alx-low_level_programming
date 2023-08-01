#include "lists.h"

/**
 * add_nodeint - appends a new node at the start of a linked list
 * @head: a pointer to the first node
 * @n: the data to be inserted in the new node
 *
 * Return: pointer to new node or null if fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addnode;

	addnode = malloc(sizeof(listint_t));
	if (!addnode)
		return (NULL);

	addnode->n = n;
	addnode->next = *head;
	*head = addnode;

	return (addnode);
}

