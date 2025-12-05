#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: is the size of the array
 * Return:a pointer to the newly created hash table
 * NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* Pointeur vers la structure principale de la table de hachage */
	hash_table_t *ht;

	/* Allocation dynamique de la structure hash_table_t */
	ht = malloc(sizeof(hash_table_t));
	/* Si l'allocation échoue, on signale l'erreur au code appelant */
	if (ht == NULL)
		return (NULL);

	/* On enregistre la taille de la table (nombre de cases du tableau) */
	ht->size = size;

	/*
	 * Allocation du tableau de pointeurs vers hash_node_t.
	 * calloc initialise toute la zone mémoire à 0 :
	 * -> chaque élément du tableau (pointeur) sera mis à NULL.
	 */
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array ==  NULL)
	{
		/* En cas d’échec de cette deuxième allocation, on libère ht pour éviter une fuite mémoire */
		free(ht);
		return (NULL);
	}
	/* On renvoie la nouvelle table de hachage initialisée */
	return (ht);
}
