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
	/* Sécurité : on vérifie que les deux paramètres sont valides */
	if (name == NULL || f == NULL)
		return;
	/* Appel de la fonction f avec le paramètre name*/
	f(name);
}
