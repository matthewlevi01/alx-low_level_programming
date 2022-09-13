#include "main.h"

/**
 * print_alphabet_x10 - this is an executor function
 * Description: This method prints the alphabets 10 times
 * Return: 0;
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
