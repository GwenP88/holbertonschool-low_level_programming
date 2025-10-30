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
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);
		if(i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
