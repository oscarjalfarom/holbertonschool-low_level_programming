#include "main.h"
#include <stdio.h>
/**
 ** reset_to_98 - Updates the pointer value to 98
 **@n: The pointer to update
 **Return: 0
 **/

char *_strcat(char *dest, char *src)
{
    char *ptr = dest;

    while (*ptr != '\0') {
        ptr++;
    }

    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }

    *ptr = '\0';

    return dest;
}
