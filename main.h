#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *pt;
	int (*fun)();
} print;

int _putchar(char c);
int _printf(const char *format, ...);
int print_binary(va_list value);
int print_unsigned(va_list ap);
int print_octal(va_list value);
int print_char(va_list ap);
int print_str(va_list ap);
int print_percent(void);
int hex_lower(va_list value);
int hex_upper(va_list value);
int print_int(va_list ap);
int print_dec(va_list ap);
int _strlen(char *str);
int _strlenc(const char *str);
int print_S(va_list ap);
int print_HEX(unsigned int num);
int print_ptr(va_list ap);
int print_extra(unsigned long int n);
int reverse_str(va_list ap);
int print_rot13(va_list ap);


#endif /* MAIN_H */
