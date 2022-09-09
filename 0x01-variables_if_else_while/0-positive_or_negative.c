#include <stdlib.h>
#include <time.h>

/**
 * main - this is where the function gets called
 * Description: prints greater than or less than
 * Return: Always 0. SUccess value
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
