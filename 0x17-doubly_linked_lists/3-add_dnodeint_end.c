#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: address of pointer
 * @n: int field of new node
 *
 * Return: the address of new node or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		node = *head;
		while (node->next)
			node = node->next;

		node->next = new;
		new->prev = node;
	}
	return (new);
}
