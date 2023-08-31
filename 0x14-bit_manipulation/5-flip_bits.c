#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first integer
 * @m: second integer
 *
 * Return: the number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, cnt = 0;
	unsigned long int v;
	unsigned long int y = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		v = y >> z;
		if (v & 1)
			cnt++;
	}

	return (cnt);
}

