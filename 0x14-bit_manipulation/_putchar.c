#include "main.h"
#include <unistd.h>

/**
 * _putchar - this writes characters to stdout
 * @c: character to print out
 *
 * Return: 1 for a  success.
 *  A -1 On an error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

