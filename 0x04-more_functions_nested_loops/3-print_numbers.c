#include "main.h"

/**
 * print_numbers - Make a print of int from 0-9
 * return: a void
 */

void print_numbers(void)
{
	char m;

	for (m = '0'; m <= '9'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
