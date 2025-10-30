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
	int *start = a;
	int *end;
	int tmp;

	end = &a[n-1];

	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}

	printf("\n");
}
