#include <stdio.h>
#include "main.h"

/**
 * _isupper - entry point to function
 * Return: returns 1 if uppercase, 0 if not
 * @c: input to check
 */

int _isupper(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	else
		return (0);
}
