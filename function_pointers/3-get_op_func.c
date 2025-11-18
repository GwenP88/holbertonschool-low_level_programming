#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 *
 * @s: the operator
 *
 * Return: a pointer to the function
 * that corresponds to the operator given as a parameter
 */

/* not switch, do...while, else*/
/* juste 1 if and 1 while*/
/* if s isn't + - * / % return NULL*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	/* parcour le tableau ops jusqu'à NULL*/
	/* si s = + - / * % alors aller vers fonction*/

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
