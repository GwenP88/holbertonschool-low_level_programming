#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	/* Valeur de départ "magique" utilisée par l'algorithme djb2 */
	hash = 5381;
	/* Lit chaque caractère c jusqu'au '\0'*/
	while ((c = *str++))
	{
		/* Opération principale : hash = hash * 33 + c
		 * (hash << 5) équivaut à hash * 32, donc (hash << 5) + hash = hash * 33
		 * on “mélange” la valeur précédente du hash avec
		 * ce caractère via une multiplication par 33
		 * et une addition.
		 */
		hash = ((hash << 5) + hash) + c;
	}
	/* On renvoie la valeur finale du hash */
	return (hash);
}
