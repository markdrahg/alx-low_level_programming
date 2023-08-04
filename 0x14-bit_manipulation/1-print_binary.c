#include "main.h"

/**
 * print_binary - binary representation equivalent of a decimal number printer
 * @n: the number to print in binary
 */

void print_binary(unsigned long int n)
{
	int m, k = 0;
	unsigned long int current;

	for (m = 63; m >= 0; m--)
	{
		current = n >> m;

		if (current & 1)
		{
			_putchar('1');
			k++;
		}
		else if (k)
			_putchar('0');
	}
	if (!k)
		_putchar('0');
}

