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
	dlistint_t *tmp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		dl_node = *head;
		tmp = dl_node->next;
		if (tmp)
		{
			tmp->prev = NULL;
			*head = tmp;
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
			prev_node->next = next_node;
			if (next_node == NULL)
				next_node->prev = NULL;
			else
				next_node->prev = prev_node;
			free(dl_node);
			return (1);
		}
		dl_node = dl_node->next;
		i++;
	}
	return (-1);
}
