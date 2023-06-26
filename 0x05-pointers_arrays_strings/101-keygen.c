#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A random password
 * generator for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int pass[100];
	int m, total, n;

	total = 0;

	srand(time(NULL));

	for (m = 0; m < 100; m++)
	{
		pass[m] = rand() % 78;
		total += (pass[m] + '0');
		putchar(pass[m] + '0');
		if ((2772 - total) - '0' < 78)
		{
			n = 2772 - total - '0';
			total += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}

