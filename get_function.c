#include "main.h"
/**
 * get_function - function specifiers
 * @con_spec: conversion specifiers
 * Return: char count
 */
int get_function(char con_spec, va_list args)
{
	int i = 0;

	int count_f = 0;
	specifiers_t spec[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_mod},
		{'d', print_digit},
		{'i', print_digit},
		{'r', print_rev_string},
		{0, NULL}
	};
	while (spec[i].specifiers)
	{
		if (con_spec == spec[i].specifiers)
			count_f += spec[i].f(args);
		i++;
	}
	if (count_f == 0)
	{
		count_f += _putchar('%');
		count_f += _putchar(con_spec);
	}
	return (count_f);
}
