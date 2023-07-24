#ifndef MAIN_H
#define MAIN_H
#include  <stdlib.h>
#include <stdarg.h>
/**
 * struct flags - contains flags when flag specifier is passed to _printf()
 * @plus: flag for '+' character
 * @space: flag for ' ' character
 * @hash: flag for '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;
/**
 * struct pHandler - chooses the right function depending on
 * format specifier
 * @c: format specifier
 * @p: pointer to correct printing function
 */
typedef struct pHandler
{
	char c;

	int (*f)(va_list ap, flags_t *f);
} ph;
/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* printf */
int _printf(const char *format, ...);

/* get_flag */
int get_flag(char s, flags_t *f);

/* get_print */
int (*get_print(char s))(va_list, flags_t *);

#endif
