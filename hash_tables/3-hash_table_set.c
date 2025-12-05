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

	if (ht == NULL || key == NULL || value == NULL
		 || key[0] == '\0' || ht->size == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			return (update_node_value(current_node, value));
		}
		current_node = current_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_value = strdup(value);
	if (new_value == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = new_value;
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
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

	if (node == NULL || value == NULL)
		return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);
	free(node->value);
	node->value = new_value;
	return (1);
}
