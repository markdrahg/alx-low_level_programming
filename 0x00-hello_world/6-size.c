#include <stdio.h>
/**
 * main - a program that prints size of data types
 * Return 0 (Success)
 */

int main(void)
{
char m;
int n;
long int o;
long long int p;
float q;

printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(m));
printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(n));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(o));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(p));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(q));
return (0);
}
