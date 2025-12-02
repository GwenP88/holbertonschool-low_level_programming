#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a DLlist
 * @head: first elements of the list
 * @n: element add (here, numbers)
 * Return: the number of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/*verifier si head non nul*/
	if (head == NULL)
		return (NULL);

	/*alloué de la mémoire pour new*/
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
