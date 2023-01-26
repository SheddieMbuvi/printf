#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - function for printing
 * @format: the format being cheked
 * Return: number of chars
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '\0')
			return ('\0');
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					_puts(va_arg(args, char*));
					count++;
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				case 'd':
					print_number(va_arg(args, int));
					count++;
					break;
				case 'i':
					print_number(va_arg(args, int));
					count++;
					break;
				default:
					_putchar(format[i]);
					count++;
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}

