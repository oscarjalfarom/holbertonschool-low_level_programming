#include "main.h"
#include <stdio.h>

/**
  ** reset_to_98 - Updates the pointer value to 98
  **@n: The pointer to update
  **Return: 0
  **/

void _puts_recursion(char *s)
{
  if ((*s) != '\0'){
    _putchar(*s);
    s = s + 1:
    _puts_recursion(s);
  }
}
