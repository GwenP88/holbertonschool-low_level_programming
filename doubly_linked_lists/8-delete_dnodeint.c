#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index index of a DLlist
 * @head: first elements of the list
 * @index: the index of the list where the new node should be deleted
 * Return: the number of nodes
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dl_node;
	dlistint_t *prev_node;
	dlistint_t *next_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		dl_node = *head;
		next_node = dl_node->next;
		if (next_node)
		{
			next_node->prev = NULL;
			*head = next_node;
		}
		else
			*head = NULL;
		free(dl_node);
		return (1);
	}
	dl_node = *head;
	while (dl_node != NULL)
	{
		if (i == index)
		{
			prev_node = dl_node->prev;
			next_node = dl_node->next;
			if (next_node == NULL)
				prev_node->next = NULL;
			else
				prev_node->next = next_node;
			next_node->prev = prev_node;
			free(dl_node);
			return (1);
		}
		dl_node = dl_node->next;
		i++;
	}
	return (-1);
}
