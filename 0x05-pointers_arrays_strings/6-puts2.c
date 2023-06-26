#include "main.h"

/**
 * puts2 - A function to print a string in list form
 * one at a time
 * @str: input
 * Return: the print out
 */

void puts2(char *str)
{
	int longi = 0;
	int m = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	m = longi - 1;
	for (o = 0 ; o <= m ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}

