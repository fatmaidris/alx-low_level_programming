#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the giving index
 * @head: the adrress of pointer
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int l = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (l == index)
		{
			prev_node->next = node->next;
			free(node);
			return (1);
		}
		l++;
		prev_node = node;
		node = node->next;
	}
	return (-1);
}
