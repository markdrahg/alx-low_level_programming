#include "main.h"

/**
 * _atoi - converts a string to integer
 * @s: string to converte
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int m, d, n, len, f, digit;

	m = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (m < len && f == 0)
	{
		if (s[m] == '-')
			++d;

		if (s[m] >= '0' && s[m] <= '9')
		{
			digit = s[m] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			f = 0;
		}
		m++;
	}

	if (f == 0)
		return (0);

	return (n);
}

