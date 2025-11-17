#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name.
 *
 * @name: pointer to a char name
 * @f: function pointer to a char
 *
 * Return: nothing (void)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
