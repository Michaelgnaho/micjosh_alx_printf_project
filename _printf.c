#include "main.h"

/**
 * _printf - prints fornatted output
 * @format: agument identifier.
 * Return: length of the string.
 */

int _printf(const char * const format, ...)
{
	print ptr[] = {
		{"%s", print_str}, {"%c", print_char},
		{"%%", print_percent}, {"%i", print_int},
		{"%d", print_dec}, {"%r", reverse_str},
		{"%R", print_rot13}, {"%b", print_binary},
		{"%u", print_unsigned}, {"%o", print_octal},
		{"%x", hex_lower}, {"%X", hex_upper},
		{"%S", print_S}, {"%p", print_ptr}
	};

	va_list args;
	int a = 0, b, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}


	while (format[a] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (ptr[b].pt[0] == format[a] && ptr[b].pt[1] == format[a + 1])
			{
				length += ptr[b].fun(args);
				a = a + 2;
				break;
			}
			b--;
		}
		_putchar(format[a]);
		length++;
		a++;
	}
	va_end(args);
	return (length);
}
