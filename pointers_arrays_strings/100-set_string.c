#include "main.h"
#include <stdio.h>

/**
 * set_string -  function that sets the value of a pointer to a char.
 * After the call to set_string, the two pointers point to the same string
 * @s: pointer to pointer of a char
 * @to: pointer to a char
 * Return: nothing because void function
 */

void set_string(char **s, char *to)
{
	*s = to;
}
