#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _putchar - prints characters to stdout
 * @c: character to print
 * Return: c
 */
static int _putchar(char c)
{
	return (c);
}
/**
 * print_string - prints null terminated string to stdout
 * @str: pointer to string
 * Return: characters to be printed
 */
static int print_string(const char *str)
{
	int count = 0;

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}
/**
 * _printf - function to produce the output
 * @format: character string
 * Return: characters to be printed
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;/*Keeps track of total characters*/

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					char c = va_arg(args, int);

					count += _putchar(c);
					break;
				case 's':
					const char *str = va_arg(args, const char *);

					count += print_string(str);
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					count += _putchar('%');
					count += _putchar(*format);
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
