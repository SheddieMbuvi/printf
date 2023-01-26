#include <limits.h>
#include <stdio.h>
#include "main.h"


/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    char b = 'k';

    len = _printf("%%Let's try to %c printf a simple sentence.\n", b);
    len2 = printf("Let's try to printf a simple sentence.\n");
    return (0);
}
