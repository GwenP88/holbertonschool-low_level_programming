#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - function that searches for an integer.
 *
 * @array: pointer to a char name
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: the index of the first element
 * OR -1 if no element matches and If size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	i = 0;

	while (i < size)
	{
		result = cmp(array[i]);

		if (result != 0)
			return (i);
		i++;
	}
	return (-1);
}
