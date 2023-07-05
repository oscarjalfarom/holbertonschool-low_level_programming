#include "main.h"
#include <stdio.h>

void
_puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		++s;
		_puts_recursion(s);
	}
}
