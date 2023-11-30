#include "function_pointers.h"

/**
 * * print_name - prints a name
 * * @name: the string ame
 * * @f: parameter
 * * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
