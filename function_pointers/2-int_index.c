#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - function that searches for an integer.
 *
 * @array: pointer to a char name
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare values
 *
 * Return: the index of the first element
 * OR -1 if no element matches and If size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	/* Vérification des paramètres d’entrée :
	 * - size <= 0 : taille invalide
	 * - array == NULL : tableau inexistant
	 * - cmp == NULL : fonction de comparaison inexistante
	*/

	i = 0;

	while (i < size)
	{
		result = cmp(array[i]);
		/* Appel de la fonction de comparaison sur l’élément courant du tableau.
		 * cmp retourne :
		 *   - 0  : si la condition n’est pas remplie
		 *   - !=0: si la condition est remplie pour array[i]
		 */

		if (result != 0)
			return (i);
			/* Si fct cmp donne une valeur non nulle, on a trouvé
		 	* le premier élément qui vérifie la condition → on renvoie son index.
		 	*/
		i++;
		/* Sinon, on passe à l’élément suivant */
	}
	return (-1);
	/* Si fin de boucle et aucun élément trouvé alors -1*/
}
