#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
/*
 * _print_str - prints a string
 * @string: string to be printed
 * Return: length of printed characters
 */
#include <unistd.h>
#include <stdarg.h>
/**
 * print_string - prints string
 * @args: argument
 * Return: character count
 */
int print_string(va_list args)
{
	int i;
	int count_f = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";
	if (str[0] == '\0')
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
		count_f += _putchar(str[i]);
	return (count_f);
}
