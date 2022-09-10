#include <stdio.h>

/**
 * main - this is the main function
 * Description: This function prints all combination of two digits
 *
 * Return: returns 0. success value
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		char j;

		for (j = '0'; j <= 9; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
