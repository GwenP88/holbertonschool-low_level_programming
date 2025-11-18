#ifndef CALC_H
#define CALC_H

/* === Structures === */

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	/* Pointeur vers chaine de caractère + - / * % */
	int (*f)(int a, int b);
	/* pointeur de f */
} op_t;
/* op_t = "couple (symbole, fonction)" op_t = (char *op, *f)*/

/* === Prototypes === */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
