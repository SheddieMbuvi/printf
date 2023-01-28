#include "main.h"
#include <stdio.h>
/**
 * int_to_binary - function that converts decimal to binary
 * @n: the string to check the length
 */
void int_to_binary(int n)
{
	int binaryNum[32], j, i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	while (n > 0)
	{
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	_putchar(binaryNum[j] + '0');
}
