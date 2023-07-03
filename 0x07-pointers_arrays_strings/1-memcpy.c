#include "main.h"

/**
 *_memcpy - A function which copies memory area
 *@dest: memory where storing takes place
 *@src: memory where is coping takes place
 *@n: the number of bytes
 *
 *Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int i = n;

	for (; m < i; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}

