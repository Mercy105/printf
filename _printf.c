#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - produces output according to a format
 * @format: contains characeters and specifiers
 * Return: output
 */
int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;

	va_start(args, format);
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			if (*format == '%')
			{
				_putchar('%');
				count++;
				format++;
				continue;
			}
			if (*format == 's' || *format == 'c' || *format == ' ')
				return (-1);
			_putchar('%');
			_putchar(*format);
			count += 2;
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
