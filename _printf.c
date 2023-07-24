#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - produces output based on a format
 * @format: character string
 * Return: output of format
 */
int _printf(const char *format, ...)
{
	const char *c = format;

	int printed_chars = 0;

	int num;

	const char *str;

	va_list args;

	va_start(args, format);
	while (*c != '\0')
	{
		if (*c == '%')
		{
			c++;
			switch (*c)
			{
				case 's':
					str = va_arg(args, const char *);
					printed_chars += printf("%s", str);
					break;
				case 'd':
					num = va_arg(args, int);
					printed_chars += printf("%d", num);
					break;
				case '%':
					printed_chars += _putchar('%');
					break;
			}
		}
		else
		{
			_putchar(*c);
			printed_chars++;
		}
		c++;
	}
	va_end(args);
	return (printed_chars);
}
