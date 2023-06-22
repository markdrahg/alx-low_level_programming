#include "main.h"
#include <stdio.h>

/**
 * main - print out nums from 1 - 100
 * print Fizz for multiples of three
 * and for the multiples of five prints Buzz
 * Return: A 0 (Success)
 */
int main(void)
{
	int y;

	for (y = 1; y <= 100; y++)
	{
		if (y % 3 == 0 && y % 5 != 0)
		{
			printf(" Fizz");
		} else if (y % 5 == 0 && y % 3 != 0)
		{
			printf(" Buzz");
		} else if (y % 3 == 0 && y % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (y == 1)
		{
			printf("%d", y);
		} else
		{
			printf(" %d", y);
		}
	}
	printf("\n");

	return (0);
}
