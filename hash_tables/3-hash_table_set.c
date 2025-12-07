#include "hash_tables.h"

int update_node_value(hash_node_t *node, const char *value);

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht:is the hash table you want to add or update the key/value
 * @key: is the key (not empty)
 * @value: is the value associated with the key (not empty)
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_node, *new_node;
	char *new_value;

	/* Vérification des paramètres : table valide, key/value non NULL,
	 * key non vide, taille de table non nulle.
	 */
	if (ht == NULL || key == NULL || value == NULL
		 || key[0] == '\0' || ht->size == 0)
		return (0);

	/* Calcul de l’index de la clé dans le tableau via la fonction de hachage */
	index = key_index((const unsigned char *)key, ht->size);
	/* On récupère le premier nœud de la liste chaînée à cet index */
	current_node = ht->array[index];
	/* Parcours de la liste chaînée pour voir si la clé existe déjà */
	while (current_node != NULL)
	{
		/* Si une clé identique est trouvée, on met simplement à jour la value */
		if (strcmp(current_node->key, key) == 0)
		{
			return (update_node_value(current_node, value));
		}
		current_node = current_node->next;
	}

	/* Si on arrive ici, la clé n’existe pas encore dans ce bucket :
	 * on doit créer un nouveau nœud
	 */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	/* Duplication de la valeur pour stocker une copie propre dans le nœud */
	new_value = strdup(value);
	if (new_value == NULL)
	{
		/* En cas d’échec, on libère le nœud et on signale l’erreur */
		free(new_node);
		return (0);
	}
	new_node->value = new_value;

	/* Duplication de la clé (même logique : on ne stocke pas le pointeur externe) */
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		/* Si la duplication de la clé échoue, on nettoie tout ce qui a été allocé */
		free(new_node->value);
		free(new_node);
		return (0);
	}
	/* Insertion en tête de liste dans le bucket correspondant (gestion des collisions
	 * par chaînage séparé)
	 */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	/* Succès : la paire (key, value) est maintenant stockée dans la table */
	return (1);
}

/**
 * update_node_value - updates the value of a hash table node
 * @node: pointer to the hash table node to update
 * @value: new string to store as the node value
 *
 * Return: 1 on success, 0 on failure
 */

int update_node_value(hash_node_t *node, const char *value)
{
	char *new_value;

	/* Vérification des paramètres */
	if (node == NULL || value == NULL)
		return (0);

	/* On duplique la nouvelle valeur avant de modifier le nœud */
	new_value = strdup(value);
	if (new_value == NULL)
		return (0);
	/* On libère l’ancienne valeur, puis on remplace par la nouvelle */
	free(node->value);
	node->value = new_value;
	return (1);
}
