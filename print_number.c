#include "main.h"

/**
 * print_number - prints an integer
 * @n: param
 * @z: count pointer
 */
void print_number(int n, int*z)
{
	unsigned int i, j, numbers = 0, count;

	if (n < 0)
	{
		_putchar(45);
		numbers++;
		i = n * -1;
	}
	else
	{
		i = n;
	}

	j = i;
	count = 1;

	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((i / count) % 10) + 48);
		numbers++;
	}
	*z = numbers;
}
