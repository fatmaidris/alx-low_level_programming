#include "main.h"

/**
 * _strlen - returns the length of string
 *
 * @s: string to evalute
 *
 * Return: the length of string
*/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
