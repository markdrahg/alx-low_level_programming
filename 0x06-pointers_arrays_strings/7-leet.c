#include "main.h"

/**
 * leet - encode a string into 1337
 * @n: an input value
 * Return: value of n
 */

char *leet(char *n)
{
	int m, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; n[m] != '\0'; m++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[m] == s1[j])
			{
				n[m] = s2[j];
			}
		}
	}
	return (n);
}

