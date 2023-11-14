#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

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


#endif /* MAIN_H */
