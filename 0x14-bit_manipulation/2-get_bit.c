#include "main.h"

/**
 * get_bit - gets bit at index
 * @n: the number to index
 * @index: the bit to get
 *
 * Return: 1 if it worked, or -1 if an error occurred
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
