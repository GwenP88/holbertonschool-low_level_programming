#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a DLlist
 * @head: first elements of the list
 * @index: is the index of the node, starting from 0
 * Return: the number of nodes
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
