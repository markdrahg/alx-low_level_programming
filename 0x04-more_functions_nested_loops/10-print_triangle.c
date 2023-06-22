#include "main.h"
/**
 * print_triangle - create a triangle
 * @size: triangle size
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int y, z;

		for (y = 1; y <= size; y++)
		{
			for (z = y; z < size; z++)
			{
				_putchar(' ');
			}

			for (z = 1; z <= y; z++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
