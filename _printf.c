#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: The specified format
 *
 * Return: The number of characters that were printed
 */
int (*_selec_func(char c))(va_list);
int _printf(const char *format, ...)
{
	int  i = 0;

	int n = 0;

	va_list args;

	int (*func)(va_list);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n++;
		}
		else if (format[i + 1] == '%')
		{
			i++;
			_putchar('%');
			n++;
		}
		else
		{
			func = _selec_func(format[i + 1]);
			if (func != NULL)
			{
				n += func(args);
				i++;
			}
		}

		i++;
	}
	va_end(args);
	return (n);
}
