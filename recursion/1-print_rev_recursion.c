#include "main.h"

/**
 * _print_rev_recursion - Imprime una cadena en orden inverso.
 * @s: Puntero a la cadena a imprimir.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
    	return;

	_print_rev_recursion(s + 1);
    _putchar(*s);
}
