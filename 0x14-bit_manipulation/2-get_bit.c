#include "main.h"

/**
 * get_bit - this returns the value of a bit at a given index
 * @n: the number to look for
 * @index: the id of the bit
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int m;

	if (index > 63)
		return (-1);

	m = (n >> index) & 1;

	return (m);
}

