#include "main.h"
#include <unistd.h>
/**
 * _putchar - makes a write of character c to stdout
 * @c: Make a print of the character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

