#include <stdio.h>
#include "main.h"

/**
 * cap_string - converts sentences to camel case;
 * @str: sentence passed as a parameter
 * Return: camel case string
 */

char *cap_string(char *str)
{
	int i = 0;
	char a[] = " \t\n,:.!?\"(){}";
	int j = 0;

	while (str[i])
	{
		if (str[i] >= 'a' || str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (str[i] == a[j])
					{
						str[i + 1] -= 'a' - 'A';
					}
				}
			}
		}
		i++;
	}
	return (str);
}
