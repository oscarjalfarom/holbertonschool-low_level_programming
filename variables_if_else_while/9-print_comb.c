/*
 * File: 9-print_comb.c
 * Auth: Oscar J Alfaro M
 */
#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
		        putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
