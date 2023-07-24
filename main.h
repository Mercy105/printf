#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int (*_selec_func(char c))(va_list);
#endif
