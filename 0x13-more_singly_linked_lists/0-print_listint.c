#include "lists.h"

/**
 * print_listint - prints linked lists
 * @h: pointer
 *
 * Return:  the size of the list
*/

size_t print_listint(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		l++;
	}
	return (l);
}

