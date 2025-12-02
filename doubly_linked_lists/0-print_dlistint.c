#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a DLlist.
 * @h: first elements of the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *current;

	if (h == NULL)
		return (0);
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		i++;
		current = current->next;
	}
	return (i);
}
