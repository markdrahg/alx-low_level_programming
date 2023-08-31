#include "main.h"

/**
 * binary_to_uint - this converts binary into an unsigned int
 * @b: string containing the binary number
 *
 * Return: converted int
 */

unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int zval = 0;

	if (!b)
		return (0);

	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		zval = 2 * zval + (b[m] - '0');
	}

	return (zval);
}

