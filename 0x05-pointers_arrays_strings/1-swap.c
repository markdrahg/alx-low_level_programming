#include "main.h"

/**
 * swap_int - A function that swaps the values of two int
 * @a: swap integer
 * @b: swap integer
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

