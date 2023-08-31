#include "main.h"

/**
 * set_bit - this sets a bit at a given id to 1
 * @n: the pointer to the integer to change
 * @index: the id of the bit to set 1
 *
 * Return: 1 for a success else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

