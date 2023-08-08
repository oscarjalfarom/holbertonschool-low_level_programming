/*
 * Auth: Oscar J Alfaro M
 * File: 0-binary_to_uint.c
 */

#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: Pointer to a string containing the binary number (0s and 1s)
 * Return: The converted number, or 0 if an error occurs
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = result << 1;
		result += (*b - '0');

		b++;
	}

	return (result);
}
