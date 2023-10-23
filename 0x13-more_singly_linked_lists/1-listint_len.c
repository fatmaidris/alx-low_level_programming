#include "lists.h"

/**
 * listint_len - print linked list
 * @h:pointer
 *
 * Return: the size of the list
*/

size_t listint_len(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		h = h->next;
		l++;
	}
	return (l);
}
