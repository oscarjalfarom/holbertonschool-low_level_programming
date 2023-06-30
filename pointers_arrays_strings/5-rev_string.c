#include "main.h"
#include <string.h>
/**
 * rev_string - Prints a string in reverse
 * @s: The input string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char c;

	j = strlen(s);
	for (i = 0, j -= 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
