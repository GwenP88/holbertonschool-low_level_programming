#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 *
 * @array: pointer to a char name
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: nothing (void)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;
	 /* variable d'itération pour parcourir le tableau */

	/* boucle de 0 jusqu'à size - 1 */
	for (i = 0 ; i < size ; i++)
	{
		/* appelle la fonction action sur l'élément array[i] */
		action(array[i]);
	};
}
