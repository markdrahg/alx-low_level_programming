#include "main.h"

/**
 * _strcmp - A function that compares two string values
 * @s1: an input value
 * @s2: an input value
 *
 * Return: s1[m] - s2[m]
 */

int _strcmp(char *s1, char *s2)
{
	int m;

	m = 0;
	while (s1[m] != '\0' && s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
		m++;
	}
	return (0);
}

