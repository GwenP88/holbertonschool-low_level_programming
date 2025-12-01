#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: first elements of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *current;

	if (h == NULL)
		return (0);

	current = h;

	while (current != NULL)
	{
		if (current->str != NULL)
		{
			printf("[%d] ", current->len);
			printf("%s\n", current->str);
		} else
			printf("[0] (nil)\n");
		n++;
		current = current->next;
	}
	return (n);
}
