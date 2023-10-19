#include "lists.h"

/**
 * list_len - determines the number of elements in a linked lists
 * @h: ponter
 *
 * Return: size of list
*/

size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		h = h->next;
		l++;
	}
	return (l);
}
