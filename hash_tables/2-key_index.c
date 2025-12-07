#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @size: size of the array of the hash table
 * @key: pointer to the key
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	/* On applique la fonction de hachage djb2 sur la clé,
	 * puis on réduit le résultat dans l’intervalle [0, size - 1]
	 * grâce à l’opérateur modulo :
	 *    -> hash_djb2(key) produit un entier très grand
	 *    -> % size le transforme en index valide pour le tableau
	 */
	index = hash_djb2(key) % size;

	/* On renvoie l’index final, prêt à être utilisé pour accéder à ht->array[index] */
	return (index);
}
