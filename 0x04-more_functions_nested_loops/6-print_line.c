#include "main.h"

/**
 * print_line - draw a straight line as output
 * @n: number of times of _ should be outputed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int m;

		for (m = 1; m <= n; m++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
