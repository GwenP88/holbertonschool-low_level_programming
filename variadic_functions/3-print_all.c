#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function
 * Return: nothing (void function)
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, integer;
	double number;
	char *string, *separator = "";

	if (format == NULL)
	{
		printf("\n");
		return;
	} va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				integer = va_arg(args, int);
				printf("%s%c", separator, integer);
				separator = ", ";
			break;
			case 'i':
				integer = va_arg(args, int);
				printf("%s%d", separator, integer);
				separator = ", ";
			break;
			case 'f':
				number = va_arg(args, double);
				printf("%s%f", separator, number);
				separator = ", ";
			break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", separator, string);
				separator = ", ";
			break;
		} i++;
	}
	printf("\n");
	va_end(args);
}
