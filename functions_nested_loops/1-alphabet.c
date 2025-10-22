#include "main.h"

/**
 * print_alphabet - imprime l'alphabet en minuscule, suivi d'une nouvelle ligne
 *
 * Description: utilise _putchar pour afficher chaque lettre de 'a' à 'z'
 */

void print_alphabet(void)
{
	char i = 0;

	for (i = 'a'; i <= 'z' ; i++)
	{
		_putchar (i);
	}

	_putchar('\n');
}
