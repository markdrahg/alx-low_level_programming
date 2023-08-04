#include "main.h"

/**
 * get_endianness - Checks the type of machine endian
 * Return: a 0 when big and a 1 when small
 */

int get_endianness(void)
{
	unsigned int m = 1;
	char *k = (char *) &m;

	return (*k);
}

