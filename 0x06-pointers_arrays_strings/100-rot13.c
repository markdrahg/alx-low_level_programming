#include "main.h"
#include <stdio.h>

/**
 * rot13 - string encoder using rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int m;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; s[m] != '\0'; m++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[m] == data1[j])
			{
				s[m] = datarot[j];
				break;
			}
		}
	}
	return (s);
}

