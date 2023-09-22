#include "main.h"

/**
 * rot13 -  encodes a string using rot13
 * @s: the string targeted
 * Return: returns the encoded string
*/

char *rot13(char *s)
{
	int i, j;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"
	char *ptr = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; rot13[j] < 52; j++)
		{
			if (s[i] == rot13[j])
			{
				s[i] = ROT13[j];
				break;
			}
		}

	}
	return (s);
}
