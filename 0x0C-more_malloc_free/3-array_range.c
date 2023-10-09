#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: minimum value.
* @max: maximum value.
*
* Return: pointer to the newly created array.
* if man > mix, returns NULL.
* if malloc fails, returns NULL.
*/

int *array_range(int min, int max)
{
	int *t;
	int i;

	if (min > max)
		return (NULL);

	t = malloc(sizeof(*t) * ((max - min) + 1));

	if (t == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		t[i] = min;

	return (t);
}
