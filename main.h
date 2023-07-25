#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
<<<<<<< HEAD
#include <unistd.h>
#define NULL ((void *)0)
=======
#include <stdio.h>
#include <stdlib.h>
/**
 * struct specifiers - specifiers the format
 * @specifiers: struct format
 * @f: function used
 */
typedef struct specifiers
{
	char specifiers;
>>>>>>> 68a09e9ff992045f6a2e4116c3eb75ecdc1d1f3b

	int (*f)(va_list);
} specifiers_t;
/* prototypes */
int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);

/* conversion specifiers */
int print_char(va_list args);
int print_string(va_list args);
int print_digit(va_list args);
int print_mod(va_list args);
int print_rev_string(va_list args);

#endif
