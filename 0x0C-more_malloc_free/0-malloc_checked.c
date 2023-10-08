#include "main.h"
#include <stdlib.h>
/**
* *malloc_checked - allocates memory using malloc and exit if failed
* @b: int
* Return: pointer to the allocated memory.
* if malloc fails, status value is equal to 98.
*/

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
