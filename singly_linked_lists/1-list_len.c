#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: the first element of the list
 * Return: the numbers of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
