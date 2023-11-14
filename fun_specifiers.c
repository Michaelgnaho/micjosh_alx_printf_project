#include "main.h"

/**
 * print_char - prints a character.
 * @ap: arguments
 * @p: pointer to the structure flags
 * Return: an integer
 */
int print_char(va_list ap, flags_b *p)
{
	char b;

	(void)p;

	b = va_arg(ap, int);
	_putchar(b);
	return (1);
}


/**
 * print_str - prints a string.
 * @ap: argumen t
 * @p: pointer to the structure flags.
 * Return: the length of the string.
 */

int print_str(va_list ap, flags_b *p)
{
	char *str;
	int i, length;

	(void)p;

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
			_putchar(str[i]);
		return (length);
	}
}

/**
 * print_percent - prints the char %.
 * Return: 1.
 */

int print_percent(void)
{
	_putchar(37);
	return (1);
}
