#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - makes a print out of a sentence before the main
 * function is called and executed
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

