#include "main.h"
/**
 *rev_string - reversing string
 *
 *@s: string to be reversed
 *
 */
void rev_string(char *s)
{
	int a = 0, b;
	char c;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b < a--; b++)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
	}
