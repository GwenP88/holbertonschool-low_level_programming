#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: a pointed string
 * Return: nothing because void function.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		/* si le caractère courant est le fin de chaine
		* alors on quitte
		*/
	} else if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		/** on applique d'abord la récursivité pour aller au
		* bout de la chaine (haut de pile) en pre ordre
		*/
		_putchar(*s);
		/*on affiche les caractère un a un en redescandant
		* en post odre
		*/
	}
}
