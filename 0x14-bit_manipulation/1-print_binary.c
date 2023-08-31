#include "main.h"

/**
 * print_binary - this outputs the binary equivalent of a decimal int
 * @n: the number to output in binary
 */

void print_binary(unsigned long int n)
{
	int m, cnt = 0;
	unsigned long int k;

	for (m = 63; m >= 0; m--)
	{
		k = n >> m;

		if (k & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}

