/*
 * File: 1-alphabet
 * Auth: Oscar J Alfaro M
 */
#include "main.h"

/**
 * print_alphabet - print alphabet
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
