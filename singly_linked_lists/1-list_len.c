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
	/*init d'un compteur de noeud*/

	if (h == NULL)
		return (0);
	/*Teste si la tête de liste est NULL → la liste est vide. Renvoi 0 noeud*/

	while (h != NULL)
	{
		n++;
		/*Incrémente le compteur de nœuds à chaque itération*/
		h = h->next;
		/*Fait avancer le pointeur de parcours vers le nœud suivant dans la liste*/
	}
	return (n);
	/*Renvoie le nombre total de nœuds*/
}
