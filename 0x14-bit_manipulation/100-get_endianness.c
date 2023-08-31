#include "main.h"

/**
 * get_endianness - a function that checks endianness
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int m = 1;
	char *k = (char *) &m;

	return (*k);
}

