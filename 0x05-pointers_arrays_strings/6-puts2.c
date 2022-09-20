#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other letter
 * @str: input parameter
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			printf("%s", str[i]);
	}
	printf("\n");
}
