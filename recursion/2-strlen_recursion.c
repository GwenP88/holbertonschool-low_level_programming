#include "main.h"
#include <stddef.h>

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: a pointed string
 * Return: an integer for the length of a string
 */

int _strlen_recursion(char *s)
{
	if (s == NULL || *s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
	/* l'appel récursif descend jusqu'au cas de base en * avancant de carcatère en caracter (s + 1)
	* 1 représente le caractère courant pointé par s
	* donc “longueur de s” = 1 (caractère courant) + longueur de s+1 (le reste).
	* en pre ordre on traverse la chaine
	* en post ordre on ajoute + 1 et on retourne le total
	*/
}
