#include "lists.h"

/**
 * _strlen - return the length of strings
 * @s: the string to check its length
 *
 * Return: integer length of the string
*/

int _strlen(char *s)
{
	int l = 0;

	if (!s)
		return (0);
	while (*s++)
		l++;
	return (l);
}
/**
 * print_list - print element of a linked list
 * @h: pointer
 *
 * Return: the size of the list
*/
size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		l++;
	}
	return (l);
}
