#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to an array of integers
 * @size: the size of the square matrix
 * (the number of row and col because it's a square)
 * Return: nothing because void function
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		/**
		 * le "numero" de case : a[i * size + j]
		 * a[i * size + j] == a[index]
		 */

		diag1 = diag1 + a[i * size + i];
		diag2 = diag2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", diag1, diag2);
}
