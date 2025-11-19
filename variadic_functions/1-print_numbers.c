#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that print numbers in parameters.
 *
 * @separator: pointer to the first caracter of the string
 * to be printed between numbers
 * @n: the number of interger on parameters
 *
 * Return: nothing (void function)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0;
	int list;

	va_start(numbers, n);

	while (i < n)
	{
		list = va_arg(numbers, int);
		printf("%d", list);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		i++;
	}
	printf("\n");
	va_end(numbers);
}
