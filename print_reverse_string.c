#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * print_rev_string - prints reversed string
 * @args: argument
 * Return: Length of output
 */
int print_rev_string(va_list args)
{
	int count_f = 0;
	int i = 0;
	char *s = va_arg(args, char *);

	if (!s)
		s = "(null)";
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		count_f += _putchar(s[i]);
		i--;
	}
	count_f--;
	return (count_f);
}
