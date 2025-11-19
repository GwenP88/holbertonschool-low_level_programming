#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that print strings in parameters.
 *
 * @separator: pointer to the first caracter of the string
 * to be printed between strings
 * @n: the number of strings on parameters
 *
 * Return: nothing (void function)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;
	char *list;

	va_start(strings, n);

	while (i < n)
	{
		list = va_arg(strings, char*);
		if (list == NULL)
			printf("(nil)");
		printf("%s", list);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strings);
}
