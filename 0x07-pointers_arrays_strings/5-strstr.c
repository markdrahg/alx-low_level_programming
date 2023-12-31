#include "main.h"

/**
 * _strstr - The entry point
 * @haystack: The input
 * @needle: The input
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *p = needle;

		while (*m == *p && *p != '\0')
		{
			m++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

