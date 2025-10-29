#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers.
 * followed by a new line.
 * @a: an array of integers;
 * @n: the number of elements of the array;
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;

	while (a[i] <= n)
	{
		i++;
	}

	for (j = i - 1; j >= 0 ; j--)
	{
		printf("%d", a[i]);
	}
	printf("\n");

}
