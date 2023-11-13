#include "main.h"

/**
 * _printf - prints formated output
 * @format: format specified
 * Return: 1 upon success
 */

int _printf(const char *format, ...)
{
	unsigned int a, str_count, count = 0;
	va_list ap;

	va_start(ap, format);
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			putch(format[a]);
		}
		else if (format[a] == '%' && format[a + 1] == 'c')
		{
			putch(va_arg(ap, int));
			a++;
		}
		else if (format[a + 1] == 's')
		{
			str_count = print_str(va_arg(ap, char*));
			a++;
			count += (str_count - 1);
		}
		else if (format[a + 1] == '%')
		{
			putch('%');
		}
		count += 1;
	}
	va_end(ap);
	return (count);
}
