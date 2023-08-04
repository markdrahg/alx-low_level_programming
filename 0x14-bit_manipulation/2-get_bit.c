#include "main.h"

/**
 * get_bit - returns the value of a bit at a specified index
 * @n: the number to look out for
 * @index: bit's index
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

