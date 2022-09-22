#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the cintent of an array of integers
 * @a: array
 * @n: number of array elements
 *
 */

void reverse_array(int *a, int n)
{
	int no_of_swaps = 0;
	int temp;
	int i = 0;

	no_of_swaps = n / 2;

	while (j < no_of_swaps)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		j++;
		n--;
	}
}
