#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @size: array size.
 * @array: array passsed
 * @cmp: pointer to function to be used to compare values
 *
 * Return: no return.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
		{
			return (i);
		}
	}
	return (-1);
}
