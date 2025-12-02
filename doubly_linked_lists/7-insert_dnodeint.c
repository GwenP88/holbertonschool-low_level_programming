#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 *  at a given position of a DLlist
 * @h: first elements of the list
 * @idx: the index of the list where the new node should be added
 * @n: element to add (here, number)
 * Return: the number of nodes
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int i = 0;
	dlistint_t *current = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	if (*h == NULL && idx > 0)
		return (NULL);

	while (current != NULL)
	{
		if (current->next == NULL && i == idx - 1)
		{
			return (add_dnodeint_end(h, n));
		} else if (i == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = current;
			tmp = current->next;
			current->next = new;
			new->next = tmp;
			tmp->prev = new;
			return (new);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
