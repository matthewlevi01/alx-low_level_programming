#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: Always 0
 *
 */

int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
