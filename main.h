#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct - store flags for conversion specifiers
 */
typedef struct
{
	int flag_plus;
	int flag_space;
	int flag_hash;
	int length_modifier_l;
	int length_modifier_h;
	int field_width;
	int precision;
	int flag_zero;
	int flag_minus;
} flag_t;
int _printf(const char *format, ...);
int _putchar(char c);
#endif
