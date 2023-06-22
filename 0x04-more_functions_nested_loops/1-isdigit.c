#include "main.h"

/**
 * _isdigit - checks to see if numbers are 0 - 9
 * @c: character to run a checked on
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
