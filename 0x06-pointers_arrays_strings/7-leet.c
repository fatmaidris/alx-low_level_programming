#include "main.h"
/**
 * leet - function that encode a string
 * @str:string that will be encoded
 * Return:returns encoded string
*/

char *leet(char *str)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L',};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = 48 + value[i];
	}
	c++;
}
