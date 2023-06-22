#include "main.h"

/**
 * print_diagonal - a diagonal line outputed
 * @n: number of times \ must be outputed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int y, z;

		for (y = 0; y < n; y++)
		{
			for (z = 0; z < n; z++)
			{
				if (z == y)
					_putchar('\\');
				else if (z < y)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
