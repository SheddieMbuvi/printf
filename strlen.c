#include "main.h"
#include <stdio.h>
/**
 * _strlen - Fundtion to show length of a string
 * @s: the string to check the length
 * Return: Lenght of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
