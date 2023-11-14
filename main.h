#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_b;


/**
 * struct format - converter for printf
 * @pt: type char pointer of the specifier
 * @fun: function for the conversion specifier
 *
 */

typedef struct format
{
	char *pt;
	int (*fun)();
} print;

int _putchar(char c);
int _printf(const char *format, ...);
int print_binary(va_list value, flags_b *p);
int print_unsigned(va_list ap, flags_b *p);
int print_octal(va_list value, flags_b *p);
int print_char(va_list ap, flags_b *p);
int print_str(va_list ap, flags_b *p);
int print_percent(void);
int hex_lower(va_list value, flags_b *p);
int hex_upper(va_list value, flags_b *p);
int print_int(va_list ap, flags_b *p);
int print_dec(va_list ap, flags_b *p);
int _strlen(char *str);
int _strlenc(const char *str);
int print_S(va_list ap, flags_b *p);
int print_HEX(unsigned int num);
int print_ptr(va_list ap, flags_b *p);
int print_extra(unsigned long int n);
int reverse_str(va_list ap, flags_b *p);
int print_rot13(va_list ap, flags_b *p);
int flags(char s, flags_b *p);

#endif /* MAIN_H */
