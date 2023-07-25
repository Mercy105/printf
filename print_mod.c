#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * print_mod - print %
 * @args: arguments
 * Return: count of chars
 */
int print_mod(va_list args)
{
	(void)args;

	_putchar('%');
	return (1);
}
