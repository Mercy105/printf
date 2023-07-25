#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * print_digit - prints integers
 * @args: argument
 * Return: count of chars
 */
int print_digit(va_list args)
{
	int decimal = 1;
	int count_f = 0;
	long int digit = va_arg(args, int);
	long int digitx;

	if (digit < 0)
	{
		count_f += _putchar('-');
		digit *= -1;
	}
	if (digit < 10)
		return (count_f += _putchar(digit + '0'));
	digitx = digit;
	while (digitx > 9)
	{
		decimal *= 10;
		digitx /= 10;
	}
	while (decimal >= 1)
	{
		count_f += _putchar(((digit / decimal) % 10) + '0');
		decimal /= 10;
	}
	return (count_f);
}
