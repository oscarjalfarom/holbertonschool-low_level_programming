#include "main.h"

/**
 *string_toupper- gets users input
 *@t: strores users input
 *Return: results
 */

char *string_toupper(char *t)
{

	int x = 0;

	while (t[x] != '\0')
	{
		if (t[x] >= 'a' && t[x] <= 'z')
		{
			t[x] = t[x] - 32;
		}
		x++;
	}
	return (t);
}
