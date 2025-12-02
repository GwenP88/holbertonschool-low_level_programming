#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a DLlist
 * @h: first elements of the list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
