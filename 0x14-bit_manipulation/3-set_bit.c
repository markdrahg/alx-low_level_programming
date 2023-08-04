#include "main.h"

/**
 * set_bit - the bit seter to 1
 * @n: the pointer to the number to be changed
 * @index: index of the bit to set to 1
 *
 * Return: 1 if successful and -1 if fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

