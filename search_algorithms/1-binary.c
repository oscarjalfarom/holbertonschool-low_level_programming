/*
 * File: 1-binary.c
 * Auth: Oscar J Alfaro M
 */

#include "search_algos.h"

/**
 * array_print - Prints an array from l to r
 * @array: pointer to first element of array
 * @l: left limit
 * @r: right limit
 */

void array_print(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i == l)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - Performs binary search algorithm on an array
 * @array: pointer to first element of array to search in
 * @size: Number of elements in array
 * @value: Value to search
 * Return: First index where value is found, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t m, left, right;

	left = 0;
	right = size - 1;
	if (!array)
		return (-1);
	while (left <= right)
	{
		array_print(array, left, right);
		m = (left + right) / 2;
		if (array[m] < value)
			left = m + 1;
		else if (array[m] > value)
			right = m - 1;
		else
			return (m);
	}
	return (-1);
}
