#include <stdio.h>
/**
 * main - bla bla bla
 * Return 0
 */

int main(void)
{
    char m;
    int n;
    long int o;
    long long int p;
    float q;

    printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(m));
    printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(n));
    printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(o));
    printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(p));
    printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(q));
}
