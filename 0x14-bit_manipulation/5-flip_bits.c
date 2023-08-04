#include "main.h"

/**
 * flip_bits - reads the number of bits to be changed
 * @n: First number
 * @m: Second number
 *
 * Return: the number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, k = 0;
	unsigned long int lngint;
	unsigned long int lusive = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		lngint = lusive >> z;
		if (lngint & 1)
			k++;
	}

	return (k);
}

