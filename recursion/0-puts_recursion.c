#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: a pointed string
 * Return: nothing because void function.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		/* imprime un saut de ligne si le caractère courant est
		* le caractère de fin de chaine
		*/
		return;
		/* sort du bloc et fin de la tache
		*/
	} else if (*s != '\0')
	{
		_putchar(*s);
		/*imprime le caractère courant
		*/
		_puts_recursion(s + 1);
		/* relance la focntion pour avancer et imprimer le
		* caractère suivant
		*/
	}
}
