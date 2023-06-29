#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: the array
 * @n: the number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int m;

	for (i = 0; i < n--; i++)
	{
		m = a[i];
		a[i] = a[n];
		a[n] = m;
	}
}

