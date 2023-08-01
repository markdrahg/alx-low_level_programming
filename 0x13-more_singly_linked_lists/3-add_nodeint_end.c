#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of a list
 * @head: pointer to the first node
 * @n: the data to be inserted in the new element
 *
 * Return: the pointer to the new node or null if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addnode;
	listint_t *fview = *head;

	addnode = malloc(sizeof(listint_t));
	if (!addnode)
		return (NULL);

	addnode->n = n;
	addnode->next = NULL;

	if (*head == NULL)
	{
		*head = addnode;
		return (addnode);
	}

	while (fview->next)
		fview = fview->next;

	fview->next = addnode;

	return (addnode);
}

