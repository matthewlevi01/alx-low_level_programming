#include <stdio.h>

/**
 * main - entry into the program
 * @argc: argument count
 * @argv: arguments array
 * Return: 0 on success
 *
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
