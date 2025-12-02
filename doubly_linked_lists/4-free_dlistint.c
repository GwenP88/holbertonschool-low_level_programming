#include "lists.h"

/**
 * free_dlistint - function that frees a DLlist
 * @head: first elements of the list
 * Return: nothing, void function
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
