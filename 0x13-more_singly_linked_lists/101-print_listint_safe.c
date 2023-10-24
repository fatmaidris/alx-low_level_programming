#include "lists.h"

/**
 * _r - reallocate memory for an array
 * @list: the ole list
 * @size: size of the new list
 * @new: new node
 *
 * Return: pointer
*/
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t l;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (l = 0; l < size - 1; l++)
		newlist[l] = list[l];
	newlist[l] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prints a list
 * @head:
 *
 * Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t l, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (l = 0; l < num; l++)
		{
			if (head == list[l])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
