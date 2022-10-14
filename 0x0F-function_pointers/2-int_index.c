#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - execute a function given as a
 *  parameter on each array element.
 * @size: array size.
 * @array: array passsed
 * @action: pointer to function to be used
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

