/*
 * File: 1-alphabet.c
 * Auth: Oscar J Alfaro M
 */

#include "main.h"

/**
 * print_alphabet - print alphabet
 */
void print_alphabet(void)
{
    char letra = 'a';

    while (letra <= 'z')
    {
        _putchar(letra);
        letra++;
    }

    _putchar('\n');
}
