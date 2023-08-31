#include "main.h"

/**
 * clear_bit - this sets the value of a given bit to 0
 * at a given index
 * @n: the pointer to the integer to change
 * @index: id of the bit to clear
 *
 * Return: A 1 for success else a -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

