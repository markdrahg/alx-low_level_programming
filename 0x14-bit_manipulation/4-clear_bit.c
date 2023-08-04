#include "main.h"

/**
 * clear_bit - this sets the value of a specified bit to 0
 * @n: this is to pointer to the number to change
 * @index: the bit index to clear
 *
 * Return: 1 if successful and -1 if fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

