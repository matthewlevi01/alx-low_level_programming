#include <stdio.h>

/**
 * main - this is the main function
 * Description: This function prints all combination of two digits
 *
 * Return: returns 0. success value
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		int j;

		for (j = i+1; j <= 9; j++)
		{
			putchar(i);
			putchar(j);
			if (i !=8 || j !=9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
