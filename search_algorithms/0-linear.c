/*
 * File: 0-linear.c
 * Auth: Oscar J Alfaro M
 */

/**
 * linear_search - Performs linear search algorithm on an array
 * @array: pointer to first element of array to search in
 * @size: Number of elements in array
 * @value: Value to search
 * Return: First index where value is found, or -1 if not found
 */

#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
	}
	if (i == size)
		i = -1;
	return (i);
}
