#include "main.h"

/**
 * print_str - prints a string.
 * @ap: argumen t.
 * Return: the length of the string.
 */

int print_str(va_list ap)
{
	char *str;
	int i, length;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
		_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
		{
			_putchar(str[i]);
		}
		return (length);
	}
}
