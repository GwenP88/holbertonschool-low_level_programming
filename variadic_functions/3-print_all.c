#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 *
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing (void function)
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int integer;
	double number;
	char *string;
	char *separator = "";

	if (format == NULL)
	{
		printf("\n");
		return;
	}

	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				integer = va_arg(args, int);
				printf("%s", separator);
				printf("%c", integer);
			break;
			case 'i':
				integer = va_arg(args, int);
				printf("%s", separator);
				printf("%d", integer);
			break;
			case 'f':
				number = va_arg(args, double);
				printf("%s", separator);
				printf("%f", number);
			break;
			case 's':
				string = va_arg(args, char *);
				printf("%s", separator);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
			break;
		}
		i++;
		separator = ", ";
	}
	printf("\n");
	va_end(args);
}
