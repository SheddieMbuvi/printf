#include <stdio.h>
#include "main.h"
/**
 * _puts - Function to print a string
 * @str: String to be printed
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
