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

 /**
 * not allowed to use for, goto, ternary operator, else, do ... while
 * 2 while loops max
 * 2 if max
 * maximum of 9 variables
 * allowed to use printf
 * c = char, i = integer, f = float, s = char *
 * si char * = ull = afficher nil
 */


void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int integer;
	double number;
	char *string;
	char *separator = ", ";

	va_start(args, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c' :
				integer = va_arg(args, int);
				printf("%c", integer);
			break;
			case 'i' :
				integer = va_arg(args, int);
				printf("%d", integer);
			break;
			case 'f' :
				number = va_arg(args, double);
				printf("%f", number);
			break;
			case 's' :
				string = va_arg(args, char *);
				if (string == NULL)
					printf("(nil)");
				printf("%s", string);
		}
		printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
